<?php

defined('BASEPATH') OR exit('No direct script access allowed');

// This can be removed if you use __autoload() in config.php OR use Modular Extensions
/** @noinspection PhpIncludeInspection */
require APPPATH . 'libraries/REST_Controller.php';

/**
 * This is an example of a RestApi based on PHP and CodeIgniter 3.
 * 
 *
 * @package         CodeIgniter
 * @subpackage      Rest Server
 * @category        Controller
 * @lastname          Pekka Alaluukas (edited the version made by Phil Sturgeon & Chris Kacerguis)
 * @license         MIT
 * @link            https://github.com/chriskacerguis/codeigniter-restserver
 */
class Accounts extends REST_Controller {

    function __construct()
    {
        //enable cors
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: GET, POST, OPTIONS, PUT, DELETE");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Accounts_model');
    }

    public function index_get($id=NULL)
    {
        // account from a data store e.g. database  

       // $id = $this->get('id');
       $id=$this->uri->segment(2);

        // If the id parameter doesn't exist return all accounts
        if ($id === NULL)
        {
            $account=$this->Accounts_model->get_account(NULL);
            // Check if the account data store contains account (in case the database result returns NULL)
            if ($account)
            {
                // Set the response and exit
                $this->response($account, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                // Set the response and exit
                $this->response([
                    'status' => FALSE,
                    'message' => 'No account were found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

         // Find and return a single record for a particular account.
        else {
            // Validate the id.
            if ($id <= 0)
            {
                // Invalid id, set the response and exit.
                $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
            }

            // Get the account from the database, using the id as key for retrieval.
            $account=$this->Accounts_model->get_account($id);
            if (!empty($account))
            {
                $this->set_response($account, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                $this->set_response([
                    'status' => FALSE,
                    'message' => 'account could not be found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

    }

    public function index_post()
    {
        // Add a new account
        $add_data=array(
          'firstname'=>$this->post('firstname'),
          'lastname'=>$this->post('lastname'),
          'accountnumber'=>$this->post('accountnumber'),
          'password'=>$this->post('password'),
          'accounttype'=>$this->post('accounttype'),
          'money'=>$this->post('money')
        );
        $insert_id=$this->Accounts_model->add_account($add_data);
        if($insert_id)
        {
            $message = [
                'id_account' => $insert_id,
                'firstname' => $this->post('firstname'),
                'lastname' => $this->post('lastname'),
                'accountnumber'=>$this->post('accountnumber'),
                'password'=>$this->post('password'),
                'accounttype'=>$this->post('accounttype'),
                'money'=>$this->post('money'),

                'message' => 'Added a resource'
            ];
            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not add data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }

    }
    public function index_put($id=NULL)
    {
        // Update the account
        $id=$this->uri->segment(2);
        $update_data=array(
          'firstname'=>$this->put('firstname'),
          'lastname'=>$this->put('lastname'),
          'accountnumber'=>$this->put('accountnumber'),
          'password'=>$this->put('password'),
          'accounttype'=>$this->put('accounttype'),
          'money'=>$this->put('money')

        );
        $result=$this->Accounts_model->update_account($id, $update_data);

        if($result)
        {
            $message = [
                'id_account' => $id,
                'firstname' => $this->put('firstname'),
                'lastname'=>$this->put('lastname'),
                'accountnumber'=>$this->put('accountnumber'),
                'password'=>$this->put('password'),
                'accounttype'=>$this->put('accounttype'),
                'money'=>$this->put('money'),
                'message' => 'Updates a resource'
            ];

            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else 
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not update data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }

    public function index_delete($id=NULL)
    {
        $id=$this->uri->segment(2);

        // Validate the id.
        if ($id <= 0)
        {
            // Set the response and exit
            $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
        }
        $result=$this->Accounts_model->delete_account($id);
        if ($result)
        {
          $message = [
              'id_account' => $id,
              'message' => 'Deleted the resource'
          ];
          $this->set_response($message, REST_Controller::HTTP_OK);
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not delete data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }



}

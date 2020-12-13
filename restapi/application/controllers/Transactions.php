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
 * @amount          Pekka Alaluukas (edited the version made by Phil Sturgeon & Chris Kacerguis)
 * @license         MIT
 * @link            https://github.com/chriskacerguis/codeigniter-restserver
 */
class Transactions extends REST_Controller {

    function __construct()
    {
        //enable cors
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: GET, POST, OPTIONS, PUT, DELETE");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Transactions_model');
    }

    public function index_get($id=NULL)
    {
        // transactions from a data store e.g. database  

       // $id = $this->get('id');
       $id=$this->uri->segment(2);

        // If the id parameter doesn't exist return all transactionss
        if ($id === NULL)
        {
            $transactions=$this->Transactions_model->get_transactions(NULL);
            // Check if the transactions data store contains transactions (in case the database result returns NULL)
            if ($transactions)
            {
                // Set the response and exit
                $this->response($transactions, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                // Set the response and exit
                $this->response([
                    'status' => FALSE,
                    'message' => 'No transactions were found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

         // Find and return a single record for a particular transactions.
        else {
            // Validate the id.
            if ($id <= 0)
            {
                // Invalid id, set the response and exit.
                $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
            }

            // Get the transactions from the database, using the id as key for retrieval.
            $transactions=$this->Transactions_model->get_transactions($id);
            if (!empty($transactions))
            {
                $this->set_response($transactions, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                $this->set_response([
                    'status' => FALSE,
                    'message' => 'transactions could not be found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

    }

    public function index_post()
    {
        // Add a new transactions
        $add_data=array(
          'idtransactions'=>$this->post('idtransactions'),
          'amount'=>$this->post('amount'),
          'accountnumber'=>$this->post('accountnumber'),
          'receipt_number'=>$this->post('receipt_number'),
          'idaccounts'=>$this->post('idaccounts')
        );
        $insert_id=$this->Transactions_model->add_transactions($add_data);
        if($insert_id)
        {
            $message = [
                'id_transactions' => $insert_id,
                'idtransactions' => $this->post('idtransactions'),
                'amount' => $this->post('amount'),
                'accountnumber'=>$this->post('accountnumber'),
                'receipt_number'=>$this->post('receipt_number'),
                'idaccounts'=>$this->post('idaccounts'),
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
        // Update the transactions
        $id=$this->uri->segment(2);
        $update_data=array(
          'idtransactions'=>$this->put('idtransactions'),
          'amount'=>$this->put('amount'),
          'accountnumber'=>$this->put('accountnumber'),
          'receipt_number'=>$this->put('receipt_number'),
          'idaccounts'=>$this->put('idaccounts')
        );
        $result=$this->Transactions_model->update_transactions($id, $update_data);

        if($result)
        {
            $message = [
                'id_transactions' => $id,
                'idtransactions' => $this->put('idtransactions'),
                'amount'=>$this->put('amount'),
                'accountnumber'=>$this->put('accountnumber'),
                'receipt_number'=>$this->put('receipt_number'),
                'idaccounts'=>$this->put('idaccounts'),
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
        $result=$this->Transactions_model->delete_transactions($id);
        if ($result)
        {
          $message = [
              'id_transactions' => $id,
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

    public function index_nosto($id=null)
    {
        $add_data=array(
            'id'=>$this->post('id'),
            'amount'=>$this->post('amount')
        );
        $insert_id=$this->Transactions_model->nosto($add_data);
    }
}

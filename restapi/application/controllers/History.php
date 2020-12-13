<?php

defined('BASEPATH') OR exit('No direct script access allowed');


require APPPATH . 'libraries/REST_Controller.php';


class History extends REST_Controller {

    function __construct()
    {
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: GET, POST, OPTIONS, PUT, DELETE");
        parent::__construct();

        $this->load->model('History_model');
    }
    public function index_get()

    {
        $id=$this->get('id');

        $result=$this->History_model->get_history($id);
        
            // Get the account from the database, using the id as key for retrieval.
            $history=$this->History_model->get_history($id);
            if (!empty($history))
            {
                $this->set_response($history, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
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

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
    public function index_post()

    {

            $id=$this->post('id');

        $result=$this->History_model->history($id);
            if($result){
                echo json_encode(TRUE);
            }
            else {
                echo json_encode(FALSE);
            }

            
    }
}

<?php
/**
 *
 */
class History_model extends CI_model
{
  function get_history($id){
    $call = "CALL history (?)";
    $data = array("id"=>$id);
    $this->db->query($call, $data);
  }
}
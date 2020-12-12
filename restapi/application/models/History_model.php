<?php
/**
 *
 */
class History_model extends CI_model
{
  function history($id){
    $call = "CALL history(?)";

    $data = array('id' => $id);

    $this->db->query($call, $data);

                             return $this->db->affected_rows();

}

}

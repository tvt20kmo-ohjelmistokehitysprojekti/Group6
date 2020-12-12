<?php
/**
 *
 */
class Nosto_model extends CI_model
{
  function nosto($id,  $amount){
    $call = "CALL otto(?, ?)";

    $data = array('id' => $id, 'amount' => $amount);

    $this->db->query($call, $data);

                             return $this->db->affected_rows();

}

}

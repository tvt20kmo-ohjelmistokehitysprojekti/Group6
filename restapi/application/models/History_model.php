<?php
/*
class History_model extends CI_model
{
  function get_history($id){
    $call = "CALL history (?)";
    $data = array('id' => $id);
    $this->db->query($call, $data);
    echo var_dump($this->db->get->resultArray());
    return $this->db->affected_rows();
    
  }

}
 */
class History_model extends CI_model
{
  function get_history($id){
    $this->db->select('idaccounts, amount');
    $this->db->from('transactions');
    if($id !== NULL) {
      $this->db->where('idaccounts',$id);
    }
    return $this->db->get()->result_array();
  }
}
<?php
/**
 *
 */
class Transactions_model extends CI_model
{
  function get_transactions($id){
    $this->db->select('*');
    $this->db->from('transactions');
    if($id !== NULL) {
      $this->db->where('idtransactions',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_transactions($add_data){
    $this->db->insert('transactions',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id(); 
    }
    else {
      return FALSE;
    }  
  }
  function update_transactions($id, $update_data){
    $this->db->where('idtransactions',$id);
    $this->db->update('transactions',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }

  function delete_transactions($id){
    $this->db->where('idtransactions',$id);
    $this->db->delete('transactions');
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }
 

}

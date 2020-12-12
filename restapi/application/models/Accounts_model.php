<?php
/**
 *
 */
class Accounts_model extends CI_model
{
  function get_account($id){
    $this->db->select('*');
    $this->db->from('accounts');
    if($id !== NULL) {
      $this->db->where('idaccounts',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_account($add_data){
    $this->db->insert('accounts',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id(); 
    }
    else {
      return FALSE;
    }  
  }
  function update_account($id, $update_data){
    $this->db->where('idaccounts',$id);
    $this->db->update('accounts',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }

  function delete_account($id){
    $this->db->where('idaccounts',$id);
    $this->db->delete('accounts');
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }


}

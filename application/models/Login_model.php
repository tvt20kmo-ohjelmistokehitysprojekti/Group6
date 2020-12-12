  <?php
/**
 *
 */
class Login_model extends CI_model
{

  function login($accountnumber){
    $this->db->select('password');
    $this->db->from('accounts');
    $this->db->where('idaccounts',$idaccounts);
    return $this->db->get()->row('password');
  }

  function update_Card($idaccounts, $update_data){
    $this->db->where('idaccounts',$idaccounts);
    $this->db->update('accounts',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }
}
<?php

class views_handler_disease_ids_field extends views_handler_field {

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }


  /*function construct() {
    parent::construct();
    $this->additional_fields['disease_ids'] = 'disease_ids';
  }*/


  /*function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();note
  }*/


  function render($values) {
    //$nids = $this->get_value($values, 'disease_ids');
    
    $nids = $this->get_value($values);

    $d_id = explode(',', $nids);

    $count = strpos($nids, ',') ? count($d_id) - 1 : 1;
 
    $output = '';

    foreach($d_id as $key => $i) {
      $output = $output . db_query('SELECT title FROM {node} WHERE nid = :nid', array(':nid' => $i))->fetchField();
      if( $key != $count )
        $output = $output . '<br/>';
    }

    return t($output);
  }


}
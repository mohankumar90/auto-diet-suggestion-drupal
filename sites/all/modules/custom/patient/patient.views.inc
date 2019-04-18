<?php

function patient_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'patient') . '/handlers',
    ),
    'handlers' => array(
      'views_handler_disease_ids_field' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

function patient_views_data() {
	
  $data = array();
  
  $data['patient_details']['table'] = array(
    'group' => 'Custom Table',
    'base' => array(
      'field' => array('p_id'),
      'title' => t('Patient Details'),
      'help' => t('Logs events during importing, clearing, expiry.'),
    ),
  );

  $data['patient_details']['p_id'] = array(
    'title' => t('Patient ID'),
    'help' => t('The id of the Patient ID.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'numeric' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),	

  );

  $data['patient_details']['p_name'] = array(
    'title' => t('Patient Name'), 
    'help' => t('Just a plain text field.'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  
  $data['patient_details']['created'] = array(
    'title' => t('Created'), 
    'help' => t('When the Patient details created'), 
    'field' => array(
      'handler' => 'views_handler_field_date', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['patient_details']['age'] = array(
    'title' => t('Age'), 
    'help' => t('Patient Age'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['patient_details']['gender'] = array(
    'title' => t('Sex'), 
    'help' => t('Patient Gender'), 
    'field' => array(
      'handler' => 'views_handler_field_boolean', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  
  $data['patient_details']['place'] = array(
    'title' => t('Place'), 
    'help' => t('Patient Address'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ),
  );

  $data['patient_details']['height'] = array(
    'title' => t('Height'), 
    'help' => t('Patient HEight'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['patient_details']['weight'] = array(
    'title' => t('Weight'), 
    'help' => t('Patient Weight'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );  

  $data['patient_details']['bp'] = array(
    'title' => t('BP'), 
    'help' => t('Patient Blood Pressure (BP)'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['patient_details']['blood_group'] = array(
    'title' => t('Blood Group'), 
    'help' => t('Patient Blood Group'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );  

  $data['patient_details']['activity_factor'] = array(
    'title' => t('Activity Factor'), 
    'help' => t('Patient Activity Factor'), 
    'field' => array(
      'handler' => 'views_handler_disease_ids_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['patient_details']['exercise_factor'] = array(
    'title' => t('Exercise Factor'), 
    'help' => t('Patient Exercise Factor'), 
    'field' => array(
      'handler' => 'views_handler_disease_ids_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );  

  $data['patient_details']['injury_factor'] = array(
    'title' => t('Injury Factor'), 
    'help' => t('Patient Injury Factor'), 
    'field' => array(
      'handler' => 'views_handler_disease_ids_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['patient_details']['allergens'] = array(
    'title' => t('Allergens'), 
    'help' => t('Patient Allergens'), 
    'field' => array(
      'handler' => 'views_handler_disease_ids_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['patient_details']['disease_ids'] = array(
    'title' => t('Diseases'), 
    'help' => t('Patient Diseases'), 
    'field' => array(
      'handler' => 'views_handler_disease_ids_field', 
    ),
  );

  $data['patient_details']['uid'] = array(
    'title' => t('User ID'), 
    'help' => t('Patient Created by which User'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE,
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );  

  return $data;
}
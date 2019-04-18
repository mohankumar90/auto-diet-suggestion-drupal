<?php
/**
 * @file
 * Contains \Drupal\generator_ui\Form\GeneratorForm .
 *
 */

namespace Drupal\generator_ui\Form;


use Drupal\Core\Form\FormStateInterface;
use Drupal\generator_ui\Controller\GeneratorController;

class GeneratorFieldType extends Generator {

  /**
   * Returns a unique string identifying the form.
   *
   * @return string
   *   The unique string identifying the form.
   */
  public function getFormId() {
    return 'field_type';

  }

  /**
   * Form constructor.
   *
   * @param array $form
   *   An associative array containing the structure of the form.
   * @param \Drupal\Core\Form\FormStateInterface $form_state
   *   The current state of the form.
   *
   * @return array
   *   The form structure.
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $form['into'] = array(
      '#markup' => t('<h2>' . 'Please fill the blanks to create your Plugin Field Type in D8' . '</h2>'),
      "#weight" => -3

    );
    $form['twig_file'] = array(
      "#type" => 'hidden',
      "#value" => array('type_class'=>'item.php.twig'),
    );
    $form['transformation_path'] = array(
      '#type'=> 'hidden',
      '#value' => true,
    );
    $form['type_class'] = array(
      '#type' => 'textfield',
      '#title' => t('Name of the Plugin FieldType class'),
      '#default_value' => 'ExampleType',
      '#description' => t('Path of FieldType class: module/src/Plugin/Field/FieldType/'),
      '#required' => TRUE,
    );
    $form['type_id'] = array(
      '#type' => 'textfield',
      '#title' => t('Id of the Plugin FieldType'),
      '#default_value' => 'emaill',
      '#required' => TRUE,
    );
    $form['type_label'] = array(
      '#type' => 'textfield',
      '#title' => t('Label of the Plugin FieldType'),
      '#default_value' => 'Emaill',
      '#required' => TRUE,
    );
    $form['type_description'] = array(
      '#type' => 'textfield',
      '#title' => t('description of the Plugin FieldType'),
      '#default_value' => 'An entity field containing an email value',
      '#required' => TRUE,
    );
    $form['type_default_widget'] = array(
      '#type' => 'textfield',
      '#title' => t('Id of the Plugin FieldWidget'),
      '#default_value' => 'email_default',
      '#required' => TRUE,
    );
    $form['type_default_formatter'] = array(
      '#type' => 'textfield',
      '#title' => t('Id of the Plugin Formatter'),
      '#default_value' => 'basic_string',
      '#required' => TRUE,
    );
    $form = parent::buildForm($form, $form_state);
    return $form;
  }
  /**
   * {@inheritdoc}
   */
  public function validateForm(array &$form, FormStateInterface $form_state) {
    return parent::validateForm($form, $form_state);
  }

  /**
   * Form submission handler.
   *
   * @param array $form
   *   An associative array containing the structure of the form.
   * @param \Drupal\Core\Form\FormStateInterface $form_state
   *   The current state of the form.
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    return parent::submitForm($form, $form_state);


  }


} 
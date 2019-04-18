<?php

/**
 * @file
 * Contains \Drupal\generator_ui\Form\GeneratorInfo .
 *
 */

namespace Drupal\generator_ui\Form;

//Use the necessary libraries
use Drupal\Core\Form\FormStateInterface;
use Drupal\generator_ui\Controller\GeneratorController;


class GeneratorEntityConfig extends Generator {

  /**
   * Returns a unique string identifying the form.
   *
   * @return string
   *   The unique string identifying the form.
   */
  public function getFormId() {
    return 'entity_config';

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
      '#markup' => t('<h2>' . 'Please fill the blanks to create your Entity Config in D8' . '</h2>'),
      "#weight" => -2
    );

    $form['twig_file'] = array(
      "#type" => 'hidden',
      "#value" => array(
        'entity_class' => 'entity-config.php.twig',
        'Interface' => 'entity-config-interface.php.twig',
        'ListBuilder' => 'entity-config-listbuilder.php.twig',
        'Form' => 'entity-config-form.php.twig',
        'DeleteForm' => 'entity-config-delete-form.php.twig',
        'config.links.action.yml.twig',
        'entity-config.routing.yml.twig',
        'entity.schema.yml.twig',
      ),
    );
    $form['entity_name'] = array(
      '#type' => 'textfield',
      '#title' => 'Entity name',
      '#default_value' => 'example_config_entity',
      '#description' => t('The id of the entity.'),
      '#required' => TRUE,
    );
    $form['entity_class'] = array(
      '#type' => 'textfield',
      '#default_value' => 'ExampleConfigEntity',
      '#title' => t('Entity Class'),
      '#description' => t('Defines the class of the entity'),
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
  public
  function submitForm(array &$form, FormStateInterface $form_state) {
    return parent::submitForm($form, $form_state);

  }


}
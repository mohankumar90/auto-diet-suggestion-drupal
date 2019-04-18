

(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {

	$("#resetb").click(function(e){
		e.preventDefault();

		var form = $(this).closest('form').get(0);
		form.reset();

		$(form).find('select').each(function(i, v) {
			$(v).trigger('chosen:updated');
		});
		
		$(".form-item-exercise").css('display', 'none');
		
		$(".sliderfield-display-values-field").empty();
		$(".ui-slider-range-min").css('width', '0%');
		$("a.ui-slider-handle").css('left', '0%');
		
	});

	$('#edit-food-submit').click(function()	{

		$('form').attr('novalidate','');
		var x = $('.multiselect_sel option');
		var tmp = '';
		for (var i = 0; i < x.length; i++) {
			tmp += x[i].value + ',';
		};
		$('#food-selection-form #selected_id').val(tmp);

	});

	$("#reset_food").click(function(e){
		location.reload();
	});

	/* $(".form-item-morning-choosen").change(function(e) {
		var x = $(this).find('.search-choice');			//list of selected items by choosen
		var t = $('#edit-morning-choosen option');		//select options list array
		
		
		
		for(var i=0;i<x.length;i++) {
			var index = x[i].getElementsByTagName('a')[0].getAttribute('data-option-array-index');
			console.log(t[index].value);
		}
		//console.log(e);
	}); */
	
	/* $(".qty-select").load(function() {
		console.log($(this).length + " df");
	}); */
	
  }
};
})(jQuery);

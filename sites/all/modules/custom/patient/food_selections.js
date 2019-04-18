
(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
  
	/* $(".qty-select").load(function() {
		console.log($(this).length + " df");
	}); */
	
	$(".qty-select").change(function() {
		console.log($(this).length + " df");
	});
	
  }
};
})(jQuery);

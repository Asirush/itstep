
$(function(){
	function Anton()
	{
		$('#home').toggleClass('none');
		$('#home').removeClass('anim');
	}
	
	function changeBlockNone()
	{
		$('#home').toggleClass('anim');
	}
	
	/*function Misha()
	{
		$('#b').toggleClass('block');
	}*/
	
	$('#burgm').on('click', function(){		
		Anton();	
		
	});
	
	/*$('#logo').on('click', function(){		
		Misha();	
		
	});*/
	
	$('#closem').on('click', function(){		
		changeBlockNone();	
		setTimeout(Anton, 1000);	
		
	});
		
});
$(function(){
    const $input = $('#exampleFormControlInput1');
    const $buttonAdd = $('#buttonAdd1');
    const $list = $('.list-items');
    let deleteItem;

    $buttonAdd.click(function(){
        AddItem();
    });

    $input.keydown(function(e){
      if(e.keyCode === 13){
        AddItem();
      }
    })

    function AddItem(){
      if($input.val().length > 0){
        $list.append(
            `<div class="input-group mb-1">
            <div class="input-group-prepend">
              <div class="input-group-text">
                <input type="checkbox" class="set-done">
              </div>
            </div>
            <input type="text" class="input-item form-control" readonly value="${$input.val()}">
            <button class="js_btn-delete btn btn-outline-secondary" type="button" data-toggle="modal" data-target="#confirmModel" >Remove</button>
          </div>`
        );
        $input.val('');
    }
    else{console.log('Error: input is empty')}
    }

    $(document).on('click', '.set-done', function(){
        $(this).parents('.input-group').toggleClass('done');
    })

    $(document).on('click', '.js_btn-delete',function(e){
        //$(this).parent('.input-group').remove();
        //console.log(e.target);
        deleteItem = e.target;
        $('#confirmModal').modal();
    })

    $('.confirmDeletion').click(function(){
      if(deleteItem){
        $(deleteItem).parents('.input-group').remove();
        
      }
      $('#confirmModal').modal('hide');
    })

    $('.list-items').sortable({
      cursor: "move",
      cancel: null
    });
});
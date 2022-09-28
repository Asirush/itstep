$(function(){
    const $input = $('#exampleFormControlInput1');
    const $buttonAdd = $('#buttonAdd1');
    const $list = $('.list-items');

    $buttonAdd.click(function(){
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
    });

    $(document).on('click', '.set-done', function(){
        $(this).parents('.input-group').toggleClass('done');
    })

    $(document).on('click', '.confirmModel',function(){
        $(this).parent('.input-group').remove();
    })
});
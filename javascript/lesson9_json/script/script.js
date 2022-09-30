$(function(){
    $.get("https://dummyjson.com/products?limit=10", function(response){
        $.each(response.products, function(index, value){
            console.log(`${value.title} ${value.prise}`);
            $('.product').append(createItem(value));
        })
    })
    .fail(function(){
        alert("error");
    })
})

function createItem(params){
    return `
    <div class="card" style="width: 18rem;">
    <img src="${params.images[0]}" class="card-img-top" alt="${params.title}">
    <div class="rating">Rate: ${params.rating}</div>
    <div class="card-body">
      <h5 class="card-title">${params.title}</h5>
      <p class="card-text">${params.description}</p>
      <a href="#" class="btn btn-primary">${params.price}</a>
    </div>
  </div>`
}
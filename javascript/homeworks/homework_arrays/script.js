let ProductList = [];

class Product {
    constructor(name, count, ammount) {
      this.name = name;
      this.count = count;
      this.ammount = ammount;
    }
}

function show(){
    console.log(this.name + " " + this.ammount);
}

function compare( a, b ) {
    if ( a.ammount < b.ammount ){
      return -1;
    }
    if ( a.ammount > b.ammount ){
      return 1;
    }
    return 0;
}

function showProductList(obj){
    for(let i = 0; i < 1; i++){
        obj[i].show();
    }
}

let apple = new Product();
apple.name = "apple";
apple.count = 3;
apple.ammount = false;

ProductList[0] = apple;
showProductList(ProductList);

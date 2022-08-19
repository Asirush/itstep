function MyFunction(){
    console.log();
}

function fn(a,b){
    console.log(a);
}

// #########
function getAge(name){ // we can write name=Anton to set default meaning
    console.log(name.age);
}

const Anton = {
    name: "Anton",
    age: 32,
    weight: 70,
}

getAge(Anton);
// getAge(null);

// ##########
function getData(name){ // we can write name=Anton to set default meaning
    console.log(name);
}

const Anton2 = {
    name: "Anton2",
    age: 32,
    weight: 70,
}

getAge(Anton2.age); //the here we can set needed variables for object
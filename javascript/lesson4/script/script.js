function MyFunction(){
    console.log();
}

function fn(a,b){
    console.log(a);
}

// ######### void functions
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

// ############ return functions
function getDataReturn(name){ // we can write name=Anton to set default meaning
    if(name){console.log(name);
    return name.name;}
    else{console.log('error, no entry')}
}

console.log('name: ' + getDataReturn(Anton));

// ############## local variables in functions
const GlobalVariable = "global variable";
function variables(){
    const LocalVariable = "local variable";
}
function getVars(){
    console.log(`global = ${GlobalVariable}`);  // will be recognized
 //   console.log(`local = ${LocalVariable}`);    // will be undefined
}
getVars();

// ################ default values
function defaultValues(age=0, sex=undefined){
    console.log(`Your age: ${age}, your gender: ${sex}`);
}

defaultValues(20, "male");
defaultValues(null, "female");

function defaultValues2(age=0, name=username, sex=undefined){
    let result = `data`;
    if(name){result += ` name = ${name}`}
    if(age){result += ` age = ${age}`}
    if(sex){result += ` gender = ${sex}`}
    console.log(result);
}

defaultValues2(20, "Sam", "male");
defaultValues2(null, "Veronica", "female");
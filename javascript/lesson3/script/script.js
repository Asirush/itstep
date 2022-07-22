/*for(let i = 0; i <= 10; i++){
    console.log(i);
    if(i===5){
        break;
        //continue; // breaks process and continue from next value
    }
}*/

//task 1
/*const count = parseInt(prompt("enter count of symbols"));
for(i = 0; i < count; i++){
    console.log("#");
}*/
/*
const count = parseInt(prompt("enter count of symbols"));
let i = 0;
while(i<count)
{
    document.write('#');
    i++;
}*/

//task 2
/*
let number = parseInt(prompt("enter number"));
while(number > 0)
{
    document.write(number + '<br>');
    number--;
}*/

// task 4
/*let number = parseInt(prompt("enter number")); let mem = number;
let counter = parseInt(prompt("enter counter"));
let i = 1;
while(i < counter){
    number*=mem;
    i++;
}
document.write(number);*/

// task 5
/*
let firstNumber = parseInt(prompt("enter number 1"));
let secondNumber = parseInt(prompt("enter number 2"));
let answer;

let FirstDevider = [];
let SecondDevider = [];

//document.write("First number: <br>")
for(let i = firstNumber; i > 0; i--){
    if(firstNumber%i === 0){FirstDevider.push(i);}}

//document.write("<br>Second number: <br>")
for(let i = secondNumber; i > 0; i--){
    if(secondNumber%i === 0){SecondDevider.push(i);}}

let j =0;
    
document.write("<br>answers: <br>" + FirstDevider.join() + "<br>" + SecondDevider.join()); */

// task 6
/*
let number = parseInt(prompt("enter number"));
let factorial = 1;
for(let i = number; i >= 1; i--){
    factorial *= i;
}
document.write(factorial);*/

// task 7
/*let answer, variable;

do{
    variable = parseInt(prompt("Choise 2 + 2 * 2"));
} while (variable != answer)*/

// task 8
/*
let number=1000, counter=0, answer;
do{
    number/=2;
    counter++;
}while(number > 50);
answer = number;
document.write("number " + answer + "<br>" + "counter " + counter);*/

// task 9
/*
let number = parseInt(prompt("enter number"));
for(let i = 1; i <= 100; i++){
    if(i % number === 0 ){document.write(i + "<br>"); }
}*/

// task 10
/*
let  min = parseInt(prompt("enter min")), max = parseInt(prompt("enter max"));
for(let i = min; i <= max; i+4){
    document.write(i + "<br>")
}*/

//task 11
let number = parseInt(prompt("enter number")), counter = 0;
for(let i = 0; i <= number; i++){
    if(number%i === 0){counter++;}
}
if(counter === 2){document.write("simple");}
else{document.write("false");}
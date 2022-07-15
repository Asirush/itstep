/*
    bool variables operations:
     - ! not
     - && and
     - || or
     - ^ or with excluding

*/

//task 1
/*
let month = parseInt(prompt("select month count: ", 12));
let answer;
switch(month){
    case 1: answer = "January"; break;
    case 2: answer = "February"; break;
    case 3: answer = "March"; break;
    case 4: answer = "April"; break;
    case 5: answer = "May"; break;
    case 6: answer = "June"; break;
    case 7: answer = "July"; break;
    case 8: answer = "August"; break;
    case 9: answer = "September"; break;
    case 10: answer = "October"; break;
    case 11: answer = "November"; break;
    case 12: answer = "December"; break;
}
alert("Your month " + answer);*/
// https://momentjs.com/

//task 2
/*
let number = parseInt(prompt("write your number", 123));
answer = (number % 2 === 0 ? "even" : "odd");
alert(answer);*/

//task 3
/*
let time = parseInt(prompt("enter time: ", 12));
let answer;
if(time > 0 && time < 6){answer = "night";}
else if(time >= 6 && time < 12){answer = "morning";}
else if(time >= 12 && time < 18){answer = "day";}
else if(time >= 18 && time < 24){answer = "evening";}
alert("Current time: " + answer);*/

//task 4
/*
let number_a = parseInt(prompt("write side a"));
let number_b = parseInt(prompt("write side b"));
let number_c = parseInt(prompt("write side c"));
let answer;

if((number_a + number_b) < number_c) {answer = "incorrect size";}
else if((number_b + number_c) < number_a) {answer = "incorrect size";}
else if((number_a + number_c) < number_b) {answer = "incorrect size";}
else {answer = number_a + number_b + number_c;}
alert(answer);*/

//task 5
/*
let number=prompt("Enter 4x number", "1234");
let answer = false;
if(number[0] < number[1] && number[1] < number[2] && number[2] < number[3]){answer = true;}
alert(answer);*/

//task 6
/*
let number_a=prompt("a", "5");
let number_b=prompt("b", "4");
let number_c=prompt("c", "3");
let D = (number_b*number_b - (4*number_a*number_c));
let answer1, answer2;

if(D < 0){answer1 = "error"; answer2 = "error";}
else if(D == 0){answer1 = ((-b + math.sqrt(D))/ 2*a); answer2 = ((-b - math.sqrt(D))/ 2*a);}
else if(D > 0){answer1 = ((-b + math.sqrt(D))/ 2*a); answer2 = ((-b - math.sqrt(D))/ 2*a);}
alert("x1: " + answer1 + "x2: " + answer2);*/

//task 7
/*
const usd = 437;
const eur = 482;
let answer;

let tenge = parseInt(prompt("set your value: ", 1000));
let currency = prompt("select currency: ").toLowerCase();
switch(currency){
    case usd: answer = tenge / usd; break;
    case eur: answer = tenge / eur; break;
}
alert(answer);*/

//task 8
/*
let number = prompt("enter your ticket number: ");
let answer;
if((parseInt(number[0]) + parseInt(number[1]) + parseInt(number[2])) == (parseInt(number[3]) + parseInt(number[4]) + parseInt(number[5]))){answer = "lucky one";}
else {answer = "non lucky";}
alert(answer);*/

//task 9

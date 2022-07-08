//prompt('enter username', 'username');
/*alert('external file works');*/

/*-----------------------variables set vars----------------------*/
/*
let username = prompt('enter username', 'username');
alert('Your name saved! welcome ' + username);

let number = prompt('enter number', '123');
alert(number * number); // Math.pow(number, 2);
*/

//return middle task
/*
let squereNumber1 = prompt('number1 ', 123); //we can use parseInt here, and use integer variables later
let squereNumber2 = prompt('number2 ', 123);
console.log(squereNumber1 + squereNumber2);
/*
let answer = squereNumber1/2 + squereNumber2/2;
alert('answer: ' + answer);

alert('answer: ' + (parseInt(squereNumber1) + parseInt(squereNumber2))/2);
*/

//variables
/*
Number
String
Boolean
Object
undefined
null

arifmetics:
+ - * / % same as c++

increment
    ++a - first add one to variable
    a++ - shows variable and add 1 after
dicrement
    --a - same
    a--

*/

//converter
/*
const km = parseInt(prompt('enter metters', 100));
alert(typeof km); // use this command to see variable format
const miles = 0.621371;
const result = km*miles;
alert(km + ' metters in miles: ' + result);
*/

//ax+b=0
/*
const a = parseInt(prompt('enter a', 3));
const b = parseInt(prompt('enter b', 3));
alert('X = ' + (-b/a));
*/

//hours
/*
const hours = parseInt(prompt('enter hours'));
const mins = parseInt(prompt('enter mins'));
let answer = `${23 - hours} hours and ${59-mins} mins till midnight`; 
alert(answer);*/

//numbers
//method a
/*
const number = parseInt(prompt('number', 123));
let result = (number % 100); result = Math.trunc(result/10);
alert(result);*/

//method b
/*
const number = parseInt(prompt('number', 123));
let result = number.toString();
alert(result[1]);*/

//line convert 12345 to 51234
let number = parseInt(prompt('number', 12345));
let number1 = number % 10;
let number2 = Math.trunc(number / 10);
number = number1.toString() + number2.toString();
alert(number);
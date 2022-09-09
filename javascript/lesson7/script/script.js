// difference of ' " and `
let myString1 = "Скриптонит' - \"Цепи\" \\ \nСкриптонит' - \"Цепи\"";
let myString2 = `Скриптонит' - "Цепи"`;
let myString3 = 'Скриптонит\' - "Цепи"';

// Example of reposition
//let myString4 = "hello 
//world";
let myString5 = `Hello
world`;

document.write("<pre>");
document.write(myString1);
document.write(myString2);
document.write(myString3);
document.write("</pre>");
console.log(myString1);
console.log(myString2);
console.log(myString3);

// difference of string and array
let array = ['1', '2', '3'];
let newArray = array;
console.log(array);
newArray.push('4');
console.log(array);
console.log(newArray);
// same with string
let string = 'My string';
let newString = string;
newString += ' not changed!';

// how to properly copy arrays
let array2 = ['1', '2', '3'];
let newArray2 = [...array2]


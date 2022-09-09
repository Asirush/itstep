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

// lowercase and upercase
let myString6 = "My String";
console.log(myString6.toLowerCase());
console.log(myString6.toUpperCase());

// how to remove sumbols from string
let myString7 = "Сьешь этих мягких французских булок, да выпей чаю";
console.log(myString7.substring(5, 9));

let array7 = myString7.split(' ');
console.log(array7);

// регулярные выражения - следует изучить самостоятельно

let PhoneNumber = '    +7(707)268-47-36';
let cleanNumber = PhoneNumber.trim(); // trim removes spaces, tabs, etc.
console.log(PhoneNumber);
console.log(cleanNumber);


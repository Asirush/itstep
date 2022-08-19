// task 1
function min(num1, num2){

    if(num1 < num2){console.log(num1)}
    else if(num1 > num2){console.log(num2)}
    else{console.log("values are equal")}
    //return num1 < num2 ? num1 : num2;
}

//console.log(min(2,4));
min(2,3);

// task 2
function pow(num1, num2){
    return Math.pow(num1, num2);
}

console.log(pow(2,4));

// task 3
function calc(num1, sign, num2){
    switch (sign){
        case "+":
            return num1 + num2;
        case "-":
            return num1 - num2;
        case '/':
            return num1/num2;
        case '*':
            return num1*num2;
    }
}

console.log(calc(2, "+", 5));

// task 4

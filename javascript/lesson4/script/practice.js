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
function natural(number)
{
    const array = [];

for(let i = number; i > 0; i--){
    if(number%i === 0) array.push[i];
}
    return array.length > 2 ? "not simple" : "simple";
}

console.log(natural(10));

// task 5
function table(number){
    console.log(`####### ${number}`)
    for(let i = 1; i <= 9; i++){
        
        console.log(`${number} * ${i} = ${number * i}`);
        
    }
}
//for(let i = 1; i <= 9; i++){table(i)}

// task 6
function deef(num1, num2){
    let main = 0;
    for(let i = 1; i <= num1+num2; i++){
        if(i*num2 <= num1) main++; 
    }
    console.log(`main: ${main}`);
    return num1 - (main * num2);
}

console.log(deef(9, 2));
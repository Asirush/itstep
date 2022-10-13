function task1(){
    let answer=0;
    let a = parseInt(prompt("select a: ", 12));
    let b = parseInt(prompt("select b: ", 12));
    for(let i = a; i <= b; i++){
        answer = answer+ i;
    }
    console.log(answer);
}

function task2(){
    let a = parseInt(prompt("select a: ", 12));
    let b = parseInt(prompt("select b: ", 12));
    let ProperNumbersForA = [];
    let ProperNumbersForB = [];
    let counter = 0;

    if(a > b && a < b){
        for(let i = a; i > 0; i--){
            if(a%i===0){
                ProperNumbersForA[counter] = i;
                counter++;
            }
        }
        for(let i = b; i > 0; i--){
            if(b%i===0){
                ProperNumbersForB[counter] = i;
                counter++;
            }
        }
    }
    let common = [], CommonCounter = 0;
    let item = 0, item2 = 0;
    while(item in ProperNumbersForA){
        while(item2 in ProperNumbersForB){
            if(item === item2){
                common[CommonCounter] = item;
                CommonCounter++;
            }
        }
    }
    let answer = 0;
    while(answer in common){
        if(answer > answer++){
            answer = answer++;
        }
    }
    console.log(answer);
}

function task3(){
    let a = parseInt(prompt("select number: ")), counter, answer = [];
    for(let i = 0; i <= a; i++){
        if(a%i===0){
            answer[counter] = i;
            console.log(answer[counter]);
            counter++;
        }
    }
}

function task4(){
    let a = parseInt(prompt("select number: ")), answer = a.toString();
    console.log(answer.length);
}

function task5(){
    let zero = 0, positive = 0,
    negative = 0,
    honest = 0,
    odd = 0;
    for(let i = 0; i < 10; i++){
        let a = parseInt(prompt("select number: "));
        if(a === 0){
            zero++;
        }
        else if(a > 0){
            positive++;
        }
        else if(a < 0){
            negative++;
        }
        if(a % 2 === 0){
            honest++;
        }
        if(a%2!== 0){
            odd++;
        }
    }
}

function task6(){
    let ExitStatus = 0;
    while(ExitStatus === 0){
        alert("if you want to continue enter 1, to exit enter 2");
        ExitStatus = prompt();
        if(ExitStatus === 1){
            const operator = prompt('Enter operator to perform the calculation ( either +, -, * or / ): ');  
            const number1 = parseFloat(prompt ('Enter the first number: '));  
            const number2 = parseFloat(prompt ('Enter the second number: '));  
  
            let result;

if (operator == '+') {
    result = number1 + number2;  
}  
else if (operator == '-') {
    result = number1 - number2;  
}  
else if (operator == '*') {
    result = number1 * number2;  
}  
else {  
    result = number1 / number2;
}  
window.alert(" Result is" + result);  
        }
    }
}

function task7(){
    let a = parseInt(prompt("select number: ")), b = parseInt(prompt("select index: "));
    a.toString();
    for(let i = 0; i < b; i++){
        a[i]
    }
}

function task8(){
    const week = [moday, tuseday, wednesdat, thirsday, friday, saturday, sunday];
    let status, index = 0;
    while(status !== "ok"){
        alert(`write "ok" to exit, everything else to continue`);
        status = prompt();
        if(status!=="ok"){
            console.log(week[index]);
            index++;
        }
    }
}

function task9(){
    for(let i = 2; i <= 9; i++){
        console.log(`table for ${i}`);
        for(let j = 1; j <= 10; j++){
            console.log(`${i} * ${j} = ${i*j}`);
        }
        console.log("------------");
    }
}

function task10(){
    let status = true;
    console.log("imagine number from 0 to 100");
    let start= 0 , end = 100, mid = (end - start)/2;
    while(status == true){
        console.log(`is ur number less then ${mid} (answer true false, "ok" if number us correct)`);
        let answer = prompt();
        if(answer == true){
            end = mid;
        }
        else if(answer == false){
            start = mid;
        }
        else if(answer = "ok"){
            status = false;
        }
    }
}
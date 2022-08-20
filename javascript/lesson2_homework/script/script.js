// task 1
function task1(){
    let number = parseInt(prompt('enter number')), result;
    if(number <= 12 && number > 0) result = "child";
    if(number <= 18 && number > 12) result = "tenager";
    if(number <= 60 && number > 18) result = "adult";
    if(number > 60) result = "old man";
    alert(`Your social group is: ${result}`);
}

//task 2
function task4 (){
    let number2 = parseInt(prompt('enter number'));
    switch (number2){
        case 1:
            alert(`Key is: "!"`);
    case 2:
        alert(`Key is: "@"`);
    case 3:
        alert(`Key is: "#"`);
    case 4:
        alert(`Key is: "$"`);
    case 5:
        alert(`Key is: "%"`);
    case 6:
        alert(`Key is: "^"`);
    case 7:
        alert(`Key is: "&"`);
    case 8:
        alert(`Key is: "*"`);
    case 9:
        alert(`Key is: "("`);
    case 0:
        alert(`Key is: ")"`);}
}


//task 3
function task3(){
    let number3 = parceString(prompt('enter three-digit number')), result2;
    if(number3[0] == number3[1] || number3[0] == number3[2] || number3[1] == number3[2]) result2 = "true";
    else result2 = "false";
    alert(result2);
}

//task 4
function task4(){
    let year = parseInt(prompt('enter year', '2000')), result3;
    if(year % 400 == 0 || year % 100 != 0 && year % 4 ==0) result3 = "true";
    else result3 = "false";
    alert(result3);
}

//task 5
function task5(){
    let number = parceString(prompt('enter five-digit number')), result;
    if(number[0] == number[4] && number[1] == number[3]) result = "true";
    else result = "false";
    alert(result);
}

//task 6
function task6(){
    let usd = parseInt(prompt('enter usd')); let currency = parceString(prompt('needed currency'));
    const eur = 1, uah = 36.7, azn = 1.7;
    switch(currency){
        case eur:
            alert(`Your summ: ${usd*eur}`);
        case uah:
            alert(`Your summ: ${usd*uah}`);
        case azn:
            alert(`Your summ: ${usd*azn}`);
    }
}

//task 7
function task7(){
    let payment_ammount = parseInt(prompt('enter cost')), discount = 0;
    if(payment_ammount >= 200 && payment_ammount <= 300) discount = 0.03;
    if(payment_ammount > 300 && payment_ammount <= 500) discount = 0.05;
    if(payment_ammount > 500) discount = 0.07;
    alert(payment_ammount - payment_ammount*discount);
}

//task 8
function task8(){
    let radius = parseInt(prompt('enter circle length'));
    let square = parseInt(prompt('enter square perimetr'));
    let result;
    if(square/8 >= radius/6.28) result = true;
    else result = false;
}

//task 9
function task9(){

}

//task 10
function task10(){
    
}
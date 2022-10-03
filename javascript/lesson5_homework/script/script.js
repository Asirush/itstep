const value = 1;

function degree(value, number, count){
    while(count!=0){
        value = value*number;
    count--;
    degree(value, number, count);
    }
    return value;
}

function GreatestCommonDivisor(number1, number2){
    if(number1 == number2){
        return number1;
    }
    else if(number1 > number2 && number1%number2===0){
        return number2;
    }
    else if(number2 > number1 && number2%number1===0){
        return number1;
    }
    else{
        let Divisor1 =[];
        let Divisor2 =[];
        for(let i = number1; i > 0; i--){
            if(number1%i===0){
                Divisor1.add(i);
            }
        }
        for(let i = number2; i > 0; i--){
            if(number2%i===0){
                Divisor2.add(i);
            }
        }

    }
}

function MaxNumber(number){
    let len = toString(number).length();
    let maxValue =0;
    for(let i = 0; i < len; i++){
        if(toString(number)[i] > maxValue){
            maxValue = i;
        }
    }
    return maxValue;
}

function NumberCheck(number){
    let Divisors = [], counter =0;
    for(let i = number; i > 0; i--){
        if(number%i===0){
            Divisors[counter] = i;
            counter++;
        }
    }
    if(counter > 2){
        return false;
    }
    else return true;
}

function numberFactors(number){
    if(NumberCheck(number)){
        return "Simple number";
    }
    else{
        let Divisors =[], counter = 0;
        while(number!=1){
            Divisors[counter] = MaxNumber(number);
            counter ++;
        }
        return Divisors;
    }
}

function Fibonachi(index){
    let Fibonachi = [1, 1], counter = 3;
    if(index < counter){return Fibonachi[index];}
    while(counter!=index){
        Fibonachi[counter] = Fibonachi[counter--] + Fibonachi[counter-2];
    }
    return Fibonachi[index];
}
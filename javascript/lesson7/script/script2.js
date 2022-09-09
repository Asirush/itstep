// task 1
let string1 = "hello world";
let string2 = "hello moma";

function CompareStrings(str1, str2){
    if(str1.length > str2.length){
        console.log(1);
        return 1;
    }
    else if(str1.length < str2.length){
        console.log(2);
        return 2;
    }
    else {
        console.log(0);
        return 0;
    }
}

CompareStrings(string1, string2);

// task 2
let string3 = "hello world";
function upperFirst(str){
    let FirstLetter = str.substring(0,1);
    console.log(`${FirstLetter.toUpperCase()}${str.substring(1)}`);
}

upperFirst(string3);

// task 3
let string4 = "привет страус, где пустыня";
function countA(str){
    const alphbt = ['а', 'о', 'е', 'ё', 'у', 'о', 'ы', 'э', 'ю', 'я'];
    let length = str.length, counter = 0;
    for(let i = 0; i < length; i++){
        for(let j = 0; j < 10; j++){
            if(str[i] == alphbt[j]){
                counter++;
            }
        }
    }
    console.log(counter);
    return counter;
}
countA(string4);

// task 4

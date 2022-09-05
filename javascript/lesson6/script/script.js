function GetRandomNumber(){
    const rndInt = Math.floor(Math.random()*100) + 1;
    return rndInt;
}

let item = [];
for( let i = 0; i < 10; i++){
    item.push(GetRandomNumber());
}

let item2 = [];
for( let i = 0; i < 5; i++){
    item2.push(GetRandomNumber());
}

function exploreArray(array){
    console.log(array);
}

function eve(array){
    let a = array.length, result = [];
    for(let i = 0; i < a; i++){
        if(i % 2 === 0){
            result.push(array[i])
        }
    }
    console.log(`Eve function: ${result}chr`)
}

function arraySumm(array){
    let a = array.length, summ;
    for(let i = 0; i < a; i++){
        summ += array[i];
    }
    return summ;
}

function arrayMax(array){
    const max = Math.max(...array);
    console.log(`Max elem: ${max}`);
}

// splice function
function addElemOnIndex(elem, array, index){
    let a = array.length;
    for(let i = a++; i > index; i--){
        array[i] = array[i--];
    }
    array[index] = elem;
    console.log(`Add elem function: ${array}`);
}

function delElemOnIndex(array, index){
    let a = array.length;
    for(let i = index++; i < a; i++){
        array[i] = array[i--];
    }
    console.log(`Del elem function: ${array}`);
}

exploreArray(item);
eve(item);
arraySumm(item);
arrayMax(item);
addElemOnIndex(3, item, 3);
delElemOnIndex(item, 4);


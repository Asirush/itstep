let item = {
    topLeft:[50,100],
    topRight: [150,100],
    bottomRight: [150,50],
    bottomLeft: [50,50]
}

class rectangle{
    constructor(item){
        this.topLeft = item.topLeft;
        this.topRight = item.topRight;
        this.bottomRight = item.bottomRight;
        this.bottomLeft = item.bottomLeft;
    }

    info(){
        console.log(`Top left point: ${this.topLeft}`);
        console.log(`Bottom right point: ${this.bottomRight}`);
    }

    getWidth(){
        console.log(`Width of the rectangle: ${this.bottomLeft[0] - this.bottomRight[0]}`);
        return this.bottomRight[0] - this.bottomLeft[0];
    }

    getHeight(){
        console.log(`Height of rectangle: ${this.topLeft[1] - this.bottomLeft[1]}`)
        return this.topLeft[1] - this.bottomLeft[1];
    }

    getArea(){
        let a = this.getWidth(), b = this.getHeight();
        console.log(`rectangle area: ${a * b}`);
        return a*b;
    }

    getPerimetr(){
        let a = this.getWidth(), b = this.getHeight();
        console.log(`Perimetr: ${(a+b)*2}`)
        return (a+b)*2;
    }

    setWidth(offset){
        this.topRight[0] += offset;
        this.bottomRight[0] += offset;
    }

    setHeight(offset){
        this.topLeft[1] += offset;
        this.topRight[1] += offset;
    }

    setWidthHeight(value1=0, value2=0){
        this.setWidth(value1);
        this.setHeight(value2);
    }

    moveX(value){
        this.bottomLeft[0] += value;
        this.bottomRight[0] += value;
        this.topLeft[0] +=value;
        this.topRight[0] += value;
    }

    moveY(value){
        this.bottomLeft[1] += value;
        this.bottomRight[1] += value;
        this.topLeft[1] +=value;
        this.topRight[1] += value;
    }
}

let getInfo = new rectangle(item);
getInfo.getHeight();
getInfo.setHeight(20);
getInfo.getHeight();
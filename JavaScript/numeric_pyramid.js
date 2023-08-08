function numeric (){

let value = parseInt(prompt())

for (let row = 0; row <value; row++) {
    let num
    for (let col = 0; col < row+1; col++) {
        num = col+1
    }
    console.log(num)
}

}

numeric()
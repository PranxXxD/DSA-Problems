function pyramid(){
    let value = 6
    for (let row = 0; row < value; row++) {
        let str;
      for (let col = 1; col <= value; col++) {
        if(row === value-1 || col == 1 || col === row+1){
        str += "*" 
      }
      else {
        str += " "
      }
    }
    console.log(str)
 }
}
  
pyramid()
  
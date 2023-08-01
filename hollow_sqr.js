function hollow() {
    let value = 6
    for (let i = 0; i < value; i++) {
        let str;
      for (let j = 0; j < value; j++){
      if (i == 0 || i == value-1 || j == 0 || j == value-1){
         str += "*"
        }
        else{
          str += " "
        }
      }
      console.log(str)
    }
}      

hollow()
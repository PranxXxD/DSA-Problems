function pyramid(){
  
    let value = 20;
    for (var row = 0; row < 20; row++) {
      let str;
      let k=0;
      for (var col = 0; col < ((2*value)-1); col++) {
        if(col < value-row-1){
                str += " "
        }
        else if(k<(2*row+1)){
          if(k===0 || row === value-1 || k==2*row){
          str += "*"
        }else{
          str += " "
        }
        k++
        }
        else{
          str += " "
        }
      }
      console.log(str)
    }
  }
  
  pyramid()
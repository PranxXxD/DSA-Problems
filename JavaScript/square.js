function square(value) {
    for (let row = 0; row < value; row++) {
      let str;
      for (let col = 0; col < value; col++) {
        str += "*";
      }
      console.log(str)
    }
  }
  
  square(6)
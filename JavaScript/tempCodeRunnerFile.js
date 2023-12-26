function NormalPyramid(){
  let value = prompt("Enter a value:")
  
  for (var row = 0; row < value; row++) {
    let str;
    for (var col = 0; col < row+1; col++) {
              str += "*"
    }
    console.log(str)
  }
}

NormalPyramid()
const x=(2)

function timX (x){
  if (x >0 && (x== parseFloat(x))){
    console.log ('x La So Thap Phan Duong')
  }  
  else if (x == 0){
    console.log ('x Bang 0')
  }
  else if (x >0 && (x== parseInt(x))){
    console.log ('x La So Nguyen Duong')
  } 
  else {
    return "X La So Am" 
}
};

timX(3)

 

let a= Number(9);
let b= Number(7);
let c= Number(-10);

let d= a;

function Max(a,b){
    return a> b ? a:b;
}
console.log ('So lon nhat: '+Max(a,Max(b,c)));
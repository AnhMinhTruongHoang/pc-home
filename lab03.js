// bai 3
let a= (2)
let b= (4)
let c= (4)

function giaiPhuongTrinhBac2 (n) {
let delta= b*b - 4*a*c
if(delta>0) {
    
    let x1= (-b + Math.sqrt(delta))/ (2*a)
    let x2= (-b + Math.sqrt(delta))/ (2*a)
    console.log('x1:',x)
    console.log('x2:',x)
}
else if (delta==(0)) {
    let x1= x2= -b/ (2*a)
    console.log('x1:',x)
    console.log('x2:',x)
}
else if (delta < (0)) {
    console.log ('Vo Nghiem')
} 

};
giaiPhuongTrinhBac2(2,4,4)
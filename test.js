const banKinh = 5;
const chuVi = 2 * Math.PI * banKinh;

console.log(chuVi); // 31.41592653589793
//2
let hour= (17)
var greeting 
if (hour < 18) {
    greeting = "Good day";
} 
// console.log (greeting)
// 3
let year=(2024)
function timNamNhuan(year){
    if (year%4== 0 && year%100!= 0){
        console.log ('namNhuan')
    }

}
timNamNhuan (year)
//4
const phuAm = ('u','e','o','a','i')
let n=('Nguyen Am')
function timPhuAm (n){
    'u','e','o','a','i'
    switch(n){
    case'u':
    case'e':
    case'o':
    case'a':
    case'i':{
        console.log('Nguyen Am')
        break
    }
    default:{
        console.log('Phu Am')
    }
}
}
timPhuAm('z')

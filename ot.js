let arr = [3, 451, 5, 2, 6, 76, 3, 5, 1, 243, 6, 4] 
   
for (let i = 0; i < arr.length; i++ ){
        console.log('phan Tu Thu:',arr[i])
}
//2
let tong =0
    
for (let i = 0; i < arr.length; i++ ){
        tong= tong + arr[i]
    }   
console.log('tong Cac Phan Tu:',tong)
//3
let max= arr[0]

for (let i = 0; i < arr.length; i++ ){
    if (arr[i] > max){
        max= arr[i]
        console.log('phan Tu Lon Nhat:',max)
    }
}
// 4

let min= arr[0]

for (let i = 0; i < arr.length; i++ ){
    if (arr[i] < min){
        min = arr[i]
    }
}
console.log('phan Tu Nho Nhat;',min)
//5

let TrungBinhCong= (tong/2)
console.log('trung binh cong:',TrungBinhCong)
//6
let arr1 = []
let n = 0

for (let i = arr.length-1; i >=0; i--) {
   arr1[n] = arr[i] 
   n++
 }
 console.log('mang dao nguoc:',arr1)
//b
 arr.reverse(); 
console.log('mang dao nguoc:',arr)
//7

 //b
 const tanSuatXuatHien = {};

 for (let i = 0; i < arr.length; i++) {
    const phantu = arr[i];
    tanSuatXuatHien[phantu] = (tanSuatXuatHien[phantu] || 0) + 1;
  }
  console.log(tanSuatXuatHien)
//b
for (let i = arr.length - 1; i >= 0; i--) {
     arr[i + 1] = arr[i]
    
    }
    arr[0] = 177
console.log(arr)
//i
for(let i = 0; i < arr.length; i++) {
    for(let n = i + 1; n < arr.length; n++) {
        if (arr[i] < arr[n]) {
            let tam = arr[i]
            arr[i] = arr[n]
            arr[n] = tam
        }
    }
}

console.log(arr)
///test sao luu s
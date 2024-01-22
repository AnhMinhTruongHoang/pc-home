let arr = [3, 451, 5, 2, 6, 76, 3, 5, 1, 243, 6, 4] 
   
for (let i = 0; i < arr.length; i++ ){
        console.log('phan Tu Thu i:',i,arr[i])
}
let tong= 0
for (let i = 0; i < arr.length; i++ ){
    tong= tong + arr[i]
}
console.log('tong Cac Phan Tu',tong)
//c
let max= arr[0]
for (let i = 0; i < arr.length; i++ ){
    if (arr[i] > max){
max = arr[i]
    }
}
console.log('phan Tu Lon Nhat;',max)
// min
let min = arr[0]
for (let i = 0; i < arr.length; i++ ){
    if (arr[i] < min){
        min = arr[i]
    }
}
console.log('phan Tu Nho Nhat;',min)
// Tính trung bình cộng các phần tử trong mảng
let cacThanhPhan = arr.length 

//Đảo ngược thứ tự các phần tử trong mảng
// while 

let i= 0
 while (i < arr.length){
    console.log('phan Tu Thu;',arr[i])
    i++
 }

 while (i < arr.length){
    tong= tong+arr[i]
    i++
 }
 console.log('Tong;',tong)
 //f
 
 while (i < arr.length){
    if (arr[i]> max){
    max= arr[i]
    i++
 }
 if (arr[i]<min){
    min= arr[i]
 }
 }
 console.log('phan Tu Lon Nhat Va Nho Nhat;',max,min)
 // tong
 let average = tong/arr.length
console.log('trungBinhCong:',average)
// dao
 for (let i = 0; i < arr.length/2; i++){
    let temp = arr[i]
    arr[i]=arr[arr.length-1-i]
    arr[arr.length-1-i] = temp
}
console.log(arr)
 //f
 let tanXuatHien
 //chen phan tu 117 vao dAU
 
 for (let i =arr.length; i>=0 ; i--){
    arr[i]= arr[i-1]
 }
    arr[0]= 117
    console.log(arr)
    //b
    let mang2 =[117]
for (let i = 0; i < arr.length; i++){
    mang2[mang2.length]= arr[i]

}
console.log(mang2)
//h kiemtra xem co phai day so tang dan hay ko ?
let mangTangDan=true
for (let i = 0; i < arr.length; i++){
    if (arr[i]>arr[i+1]){
        mangTangDan= false
        break
    }

}

if (mangTangDan=== true){
console.log('mangtangdan')
}
else {console.log('mangKhongTangDan')}

//i tang dan

for (let i = 0; i < arr.length; i++){



    //k so chan


for (let i = 0; i < arr.length; i++){
    if (arr[i]%2===0) {
    }
    }
console.log(arr[i])










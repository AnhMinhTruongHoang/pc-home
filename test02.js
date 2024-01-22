const x=(2)

function timX (x){
    switch(true){
        case x < 0:{
            console.log('x La So Am')
            break   
        
        }
        case x == 0:{
            console.log('x La So 0')
            break
            
        }
        case x > 0 && (x== parseInt(x)) :{
            console.log('x la so nguyen duong')
            break
            
        }
        case x > 0 && (x == parseFloat(x)):{
            console.log('so Thap Phan Duong')
            break
        }
    }
};
timX(2)
 #include <stdio.h>

int main(){
	
	const coca= 10000;
	const cam= 15000;
	const loc= 5000;
	
	int loai,sl;
	printf("so 1 coca 10000 dong:%d \n", coca);
	printf("so 2 cam 15000 dong:%d  \n", coca);
	printf("so 3 loc 5000 dong:%d  \n", coca);
	printf("Loai: ");
    printf("so luong", sl);
	printf("loai:",&loai);
    
	scanf("so luong:",&sl);
	scanf("loai:",&loai);
	
	if (loai==1){
		printf("/nTong so luong:%d", coca*sl);
	}
	else if (loai==2){
		printf("/nTong so luong:%d", cam*sl);
	}
	else if (loai==3){
		printf("/nTong so luong:%d", loc*sl);
    }
    else{
    	printf("/nkhong hop le");
	}
		
	
	
	
	
	
	
	
	return 0;
}
 
 

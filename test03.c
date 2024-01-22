 #include <stdio.h>

int main(){
	
	int td;
    printf("so kw dien suu dung la:");
    scanf("%d", &td);
    
    if (td >=1 && td <=100){
    	printf("tien dien la 5$:");
	}
	
	else if (td>= 101 && td<=150){
		printf("tien dien la 7$:");
	}
	else if (td>= 151 && td<=200){
		printf("tien dien la 10$:");
	}
	else if (td>= 201 && td<=300){
		printf("tien dien la 15$:");
		
    }
    else{
    	printf("tien dien la 20$:");
	}
	return 0;
		
    }
		
 
 

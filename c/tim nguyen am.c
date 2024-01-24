 #include <stdio.h>

int main(){
	
	char kt;
	printf("nhap ky tu:");
	scanf("%c", kt);
	
	switch(kt){
		case 'a':
		case 'A':
		case 'u':
		case 'U':
		case 'o':
		case 'O':
		case 'i':
		case 'I':
			
		printf("day la nguyen am:%c",kt);
		break;
		
		default:{
		printf("khong phai la nguyen am:%c",kt);
		
	}
			
	}
	return 0;
}
	

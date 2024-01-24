 #include <stdio.h>

int main(){
	int mg1[5];
	int i;
	for (i=0;i<=4;i++){
	printf("nhap thu tu mang%d:",i);
	scanf("%d", &mg1[i]);
}
	
	//
	
	int mg2[5];
	int j;
	for (i=0,j<=4;i<=4||j>=0;i++,j--){
		mg2[j]=mg1[i];
	}
	
	
    printf("\n gia tri mang\n");
    for (i=0;i<=4;i++){
    printf("%d - %d\n",mg1[i],mg2[i]);	
    		
	}
    return 0;
}

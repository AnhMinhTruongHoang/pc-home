 #include <stdio.h>

int main(){
	
	int n;
	printf("nhap mot so:");
	scanf("%d", &n);
	int f1=1;
	int f2=1;
	printf("1 1");
	
	int i;
	
for (i = 2; i <= n; i++) {
		int gtm = f1 + f2;
		f1 = f2;
		f2 = gtm;
		
		printf("Giá tr? moi: %d\n", gtm);
	}
	
	return 0;
}
 

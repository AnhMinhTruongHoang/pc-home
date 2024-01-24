

int main(){
	
	int x;
	printf("nhap x:");
	scanf("%d", &x);
	
	int y;
	printf("nhap y:");
	scanf("%d", &y);
	
	float a= (2*pow(x,3))+(5*x*x)+7*x+15;
	float b = sin(x) * sin(x) + cos(2 * x) * cos(2 * x) + tan(3 * x) * tan(3 * x);
	float c= pow(x+10, x+5);
	float d = 3 * exp(cos(x + 1));
	float e= log10(x+100);
	
	
	printf("ket qua a:%f\n",a);
	printf("ket qua b:%f\n",b);
	printf("ket qua c:%f\n",c);
	printf("ket qua d:%f\n",d);
	printf("ket qua e:%f\n",e);
	
	return 0;
}
 
 

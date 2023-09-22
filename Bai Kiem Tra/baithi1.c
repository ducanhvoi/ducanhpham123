#include <stdio.h>

float cong(float a,float b);
float tru(float a,float b);
float nhan(float a,float b);
float chia(float a,float b);


void main() {
	float num1, num2;
	printf("\nso hang la :");
	scanf("%f",&num1);
	
	printf("\nso hang b la :");
	scanf("%f",&num2);
	
	printf("\nThuc hien cac phep tinh :\n");
	
	float result1= cong(num1, num2);
	printf("\n a + b =%.1f",result1);
	float result2= tru(num1, num2);
	printf("\n a - b =%.1f",result2);
	float result3= nhan(num1, num2);
	printf("\n a * b =%.1f",result3);
	float result4= chia(num1, num2);
	printf("\n a / b =%.1f",result4);
	
}
float cong(float a, float b){
	return a+b;
}
float tru(float a, float b){
	return a-b;
}
float nhan(float a, float b){
	return a*b;
}
float chia(float a, float b){
	return a/b;
}

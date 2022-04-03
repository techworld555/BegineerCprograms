#include<stdlib.h>
#include<stdio.h>

// formula :  celsius = (fahrenheit - 32)*(5/9)

int main(){
	float fahrenheit,celsius;
	printf("enter the fahrenheit :  ");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit - 32)*5/9;
	printf("converterd %.4f fahrenheit in celsius is %.4f",fahrenheit,celsius);
	return 0;
}

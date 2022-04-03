#include<stdlib.h>
#include<stdio.h>

// formula : Fahrenheit = ((9 * Celsius)/5) + 32

int main(){
	float fahrenheit,celsius;
	printf("enter the celsius :  ");
	scanf("%f",&celsius);
	fahrenheit = ((9*celsius)/5)+32;
	printf("converterd %.2f celsius in fahrenheit : %.2f",celsius,fahrenheit);
	return 0;
}

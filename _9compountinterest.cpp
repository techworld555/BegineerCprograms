#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//calculating compound interest on the given principal

int main(){
	float principal, rate, time , compoundinterest;
	printf("enter the principal : ");
	scanf("%f",&principal);
	printf("enter the interest rate : ");
	scanf("%f",&rate);
	printf("enter the time period :  ");
	scanf("%f",&time);
	compoundinterest = (principal*(pow((1+ rate/100),time))) - principal;
	printf("the compound interest is : %.2f",compoundinterest);
	return 0;
}  

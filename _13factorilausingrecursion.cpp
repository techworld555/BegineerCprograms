#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*factorial(n-1));
	}
}

int main(){
	int number,fact;
	printf("enter your number : ");
	scanf("%d",&number);
	fact=factorial(number);
	printf("the factorial the given number is : %d",fact);
	return 0;
}


/* factorial using iteration 

int main(){
	int number=5,i,fact=1;
	for(i=1;i<=5;i++)
	{
		fact = fact * i;	
	}
	printf("the factorial is %d ",fact);
	return 0;
}



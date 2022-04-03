#include<stdio.h>
#include<stdlib.h>

int main(){
	int count=0,number;
	printf("enter your number : ");
	scanf("%d",&number);
	while(number>0)
	{
		count++;
		number = number/10;
	}
	printf("the number of digits in the given number is %d",count);
	return 0;
}

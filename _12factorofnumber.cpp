#include<stdio.h>
#include<stdlib.h>

int main(){
	int number,i;
	printf("enter your number : ");
	scanf("%d",&number);
	printf("the factors of the given number : \n");
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			printf("%d  ",i);
		}
	}
	return 0;
}

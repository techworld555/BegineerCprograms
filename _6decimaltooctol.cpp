#include<stdio.h>
#include<stdlib.h>

//decimal to octal 50=62

int main(){
	int number,i,j,a[10];
	printf("enter the decimal number : \n");
	scanf("%d",&number);
	for(i=0;number>0;i++)
	{
		a[i]= number % 8;
		number = number /8;
	}
	printf("the octal of the given decimal is \n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	return 0;
}

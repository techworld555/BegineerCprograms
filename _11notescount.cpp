#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[8]={500,100,50,20,10,5,2,1};
	int number,i;
	printf("enter the currency : ");
	scanf("%d",&number);
	int temp=number;
	for(i=0;i<8;i++)
	{
		printf("the %d notes no. is %d\n",a[i],temp/a[i]);
		temp = temp % a[i];
	}
	return 0;
}

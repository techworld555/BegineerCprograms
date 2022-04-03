#include<stdio.h>
#include<stdlib.h>

// converting decimal to binary
// 14 = 1110

int main(){
	int decimal, arr[10],i,j;
	printf("enter the decimal number : ");
	scanf("%d",&decimal);
	for(i=0;decimal>0;i++)
	{
		arr[i]= decimal % 2;
		decimal = decimal /2;
	}
	printf("the binary number of the decimal number is \n");
	for(j=i-1;j>=0;j--)
	{   
		printf("%d",arr[j]);
	}
	return 0; 
}

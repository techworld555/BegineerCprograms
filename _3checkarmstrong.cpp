#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//153 is an Armstrong Number in C programming because total individual digits in 153 = 3
//153 = 1³ + 5³ + 3³
//= 1 + 125 + 27 = 153
int main(){
	int number,temp,count=0,sum=0,rem;
	printf("enter your number: ");
	scanf("%d",&number);
	temp=number;
	while(temp>0)
	{
		count++;
		temp = temp/10; //153/10=15 /10=1 /10=0(3 iteration)
	}
	temp=number;
	while(temp>0)
	{
		rem = temp % 10; //153%10= 3, 
		sum += pow(rem,count); // 3**3(ieration of count), 
		temp = temp/10; //153/10=15
	}
	if(number==sum)
	{
		printf("this is a armstrong number ");
	}
	else
	{
		printf("this is not  a armstrong number");
	}
	return 0;
}

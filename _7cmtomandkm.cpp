#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//convert cm to m and km

int main(){
	float cmetre,metre,kmetre;
	printf("enter the centimeter value : ");
	scanf("%f",&cmetre);
	metre = cmetre / 100;
	kmetre = metre /1000;
	printf("the metre value is %.4f\n",metre);
	printf("the kilometre value is %.4f",kmetre);
	return 0;
}

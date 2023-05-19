#include<stdio.h>
main()
{
	float radius,area;
	printf("Enter a radius of circle \n");
	scanf("%f",&radius);
	
    area=3.14*radius*radius;
	printf("Area of circle : %0.4f cm\n",area);
}

#include<stdio.h>
main()
{
	float principle,rate,time,SI;
	printf("Enter a principle");
	scanf("%f",&principle);
	{
		printf("Enter time");
		scanf("%f",&time);
	}
	{
		printf("Enter rate");
		scanf("%f",&rate);
	}
	SI=(principle*time*rate)/100;
	printf("simple interest=%f",SI);
	
	
}

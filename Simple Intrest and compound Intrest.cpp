#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,SI,CI;
	printf("Enter the principle amount:");
	scanf("%d",&p);
    printf("Enter the time period:");
	scanf("%d",&t);
    printf("Enter the rate of intrest:");
	scanf("%d",&r);
	SI=p*t*r/100;
	CI=p*pow(1+r,t);
	printf("Simple Intrest = %.2f\n",SI);
	printf("Compound Intrest = %.2f\n",CI);
	return 0;
}

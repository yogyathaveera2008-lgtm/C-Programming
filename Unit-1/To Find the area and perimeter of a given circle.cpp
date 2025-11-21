#include<stdio.h>
int main()
{
	float radius,area, perimeter;
	const float pi = 3.14 ;
	printf("Enter the radius:");
	scanf("%f", & radius);
	area = pi * radius * radius ;
	perimeter = 2 * pi * radius ;
	printf("area of the circle : %f\n", area);
	printf("perimeter of the circle : %f\n", perimeter);
	return 0;
}

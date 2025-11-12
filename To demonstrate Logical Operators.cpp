#include <stdio.h>
int main()
{
	int a=20 , b=40 , c=20 , d;
	d=(a<b)||(a=40);
	printf(" a=%d\n , b=%d\n , c=%d\n",a,b,c);
	d=(a<b)&&(a=40);
	printf(" a=%d\n , b=%d\n , c=%d\n",a,b,c);
	d=!((a<b)||(a=40));
	printf(" a=%d\n , b=%d\n , c=%d\n",a,b,c);
	return 0 ;
}

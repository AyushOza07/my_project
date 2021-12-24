#include<stdio.h>
void main()
{
	int a=2, b=6, x=5++,y=++x++,z=(x+y)--;
	printf("%d\n",z);
	x*=a+b;
	printf("%d\n",x);	
}

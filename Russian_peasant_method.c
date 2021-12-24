#include<stdio.h>

void main()
{
	int x,y,i=0,ans=0;
	printf("enter two numbers: ");
	scanf("%d %d",&x,&y);
	do
	{
		if(x%2 != 0)
		{
			ans=ans+y;
		}
		x=x/2;
		y=y*2;
		i++;
		
	}while(x >= 1);
	printf("product of two number is: %d \n",ans);
}
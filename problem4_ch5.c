#include<stdio.h>
void main()
{
	int x,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
	printf("enter the money: ");
	scanf("%d",&x);
	while(x != 0)
	{
		if(x>=100)
		{
			n100+=1;
			x-=100;
			printf("%d\n",x);
		}
		else if(x>=50)
		{
			n50+=1;
			x-=50;
			printf("%d\n",x);
		}
		else if(x>=20)
		{
			n20+=1;
			x-=20;
			printf("%d\n",x);
		}
		else if(x>=10)
		{
			n10+=1;
			x-=10;
			printf("%d\n",x);
		}
		else if(x>=5)
		{
			n5+=1;
			x-=5;
			printf("%d\n",x);
		}
		else if(x>=2)
		{
			n2+=1;
			x-=2;
			printf("%d\n",x);
		}
		else
		{
			n1+=1;
			x-=1;
			printf("%d\n",x);
		}
	}
	printf("%d 100Rs notes, %d 50 Rs note, %d 20 Rs note, %d 10Rs notes ",n100,n50,n20,n10);
	printf(", %d 5Rs note, %d 2Rs note and %d 1Rs note will be needed \n\n",n5,n2,n1);
}


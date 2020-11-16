#include<stdio.h>
main()
{
	int i,j,k=0,x=0;
	for(i=1;i<=4;i++)
	{ x=1;
	  k='A';
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
				if(j<=4)
				{
					printf("%d",x);
					x++;
				}
				if(j>4){
					printf("%c",k);
					k++;
				}
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}

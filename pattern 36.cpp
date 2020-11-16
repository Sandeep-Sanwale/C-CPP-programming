#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{ k=0;
		for(j=1;j<=i;j++)
		{
			printf("%2d ",k);
			k=k+i-1;
		}
		printf("\n");
	}
	
}

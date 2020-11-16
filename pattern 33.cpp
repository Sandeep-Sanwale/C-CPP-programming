#include<stdio.h>
main()
{
	int i,j,k;
	char m;
	for(i=1;i<=4;i++)
	{ k=i;
	m='A';
		for(j=1;j<=7;j++)
		{
			if(j<=5-k ||j>=3+k)
			{
				printf("%c",m++);
			}
			else{
			printf(" ");
			m++;
		}
		}
		printf("\n");
	}
	
	
}

#include<stdio.h>
main()
{
	int i,j,k=1,rows=5,p;
	for(i=1;i<=rows;i++)
	{ p=k;
	
		for(j=1;j<=i;j++)
		{  
				printf("%d",p);
				p=p-(rows-i+j);
			
		}
		printf("\n");
		k=k+1+rows-i;
	}
}

#include<stdio.h>
main()
{
	int i,j,x=1,k,rows=26;
	char m='A';
	for(i=1;i<=rows;i++)
	{ m='A';
	x=1;
	k=1;
		for(j=1;j<=2*rows-1;j++)
		{
			if(j>=rows+1-i&&j<=rows-1+i)
			{
				if(k){
				
				if(i%2==1)
				
					printf("%2d",x++);
						
			
				else
			
					printf("%2c",m++);
				
			
				
	}
			else
			{
				printf(" ");
			}
			k=1-k;
			
		}
		else
		printf(" ");
	}
	printf("\n");	
	}
}

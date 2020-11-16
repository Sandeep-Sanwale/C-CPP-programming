#include<stdio.h>
main()
{
	int i,j,k=0,rows=7;
	for(i=1;i<=rows;i++)
	{ 
		for(j=1;j<=2*rows-1;j++)
		{   
			if(j>=rows+1-i && j<=rows-1+i){
				if(j<=rows) k++;
				if(j>rows) k--;
			printf("%d ",k);
			}
			else 
			printf(" ");
		}
		printf("\n");
		
	}
}

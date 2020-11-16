#include<stdio.h>
main()
{
	int i,j,k=0,rows=101;
	for(i=1;i<=rows;i++)
	{  
	      i<=(rows+1)/2?k++:k--;
		for(j=1;j<=rows;j++)
		{
			if(j<=(rows+1)/2+1-k || j>=(rows-1)/2+k)
			printf("*");
			else
			printf("/");
		}
		printf("\n");
	}
}

#include<stdio.h>
main()
{
	int i,j,k,rows;
	printf("enter number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{    if(rows%2==0)
	    {
	    	if(i<=rows/2) k++;
	    	if(i>rows/2 +1) k--;
		}
		else
	     i<=(rows+1)/2?k++:k--;
		for(j=1;j<=(rows+1)/2;j++)
		{
			if(j<=k)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}

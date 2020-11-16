#include<stdio.h>
main()
{
	int i,j,k=0,x=1,n;
	for(i=1;i<=21;i++)
	{ i<=11?k++:k--;
	x=k-1;
	
		for(j=1;j<=21;j++)
		{
			if(j>=12-k&&j<=10+k){
			
				printf("%d",j<11?x++%10:x--%10);
				
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}

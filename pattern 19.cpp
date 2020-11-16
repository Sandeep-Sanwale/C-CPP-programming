#include<stdio.h>
main()
{
	int i,j,k=0,x=0;
	for(i=1;i<=4;i++)
	{ k='A';
	   
	 
	
		for(j=1;j<=7;j++)
		{  
			if(j>=5-i && j<=3+i){
			printf("%c",k);
			j<4?k++:k--;
			/*if(j<4) k++;
			if(j>=4) k--;*/
			
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}

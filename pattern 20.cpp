#include<stdio.h>
main()
{
	int i,j,k=0,x=0;
	for(i=1;i<=4;i++)
	{ k='A';
	   x=1;
	 
	
		for(j=1;j<=8;j++)
		{  
			if(j>=5-i && j<=4+i)
			{ 
			if(j<=4){
			
			printf("%c",k);
			k++;}
		    if(j>4) {
			
			printf("%d",x);
			x++;}
			
			
			
			//j<4?k++:k--;
			//if(j<4) k++;
			//if(j>=4) k--;
			
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}

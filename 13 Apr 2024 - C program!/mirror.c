#include<stdio.h>
int main()
{
	int i,j,N,column=1,star,space;
	printf("Enter the number::");
	scanf("%d",&N);
	
	space=N-1;
	star=1;
	
	for(i=1;i<(2*N);i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=star;j++)
		{
			printf("*");
		}
		printf("\n");
		if(i<N)
		{
			star++;
			space--;
		}
		else
		{
			star--;
			space++;
		}
	
	}
	
}

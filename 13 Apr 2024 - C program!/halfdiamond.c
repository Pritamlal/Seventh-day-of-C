#include<stdio.h>
int main()
{
	int i,j,N,column;
	printf("Enter the number::");
	scanf("%d",&N);
	column=1;
	for(i=1;i<N*2;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf("* ");	
		}	
		
		if(i<N)
		{
			column++;
		}
		else
		{
			column--;
		}
		printf("\n");
	}
}

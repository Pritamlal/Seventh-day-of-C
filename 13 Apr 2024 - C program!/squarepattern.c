#include<stdio.h>
int main()
{
	int i,j,row;
	printf("Enter the row");
	scanf("%d",&row);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

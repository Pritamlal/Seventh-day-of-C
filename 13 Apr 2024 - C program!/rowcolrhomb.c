#include<stdio.h>
int main()
{
	int i,j,M,N;
	printf("Enter the Row:");
	scanf("%d",&M);
	printf("Enter the Column:");
	scanf("%d",&N);
	for(i=1;i<=M;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=N;j++)
		{
			printf("* ");
		}
	printf("\n");	
	}
	
}

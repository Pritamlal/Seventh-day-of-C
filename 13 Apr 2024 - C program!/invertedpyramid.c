#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=(2*N)-(2*i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

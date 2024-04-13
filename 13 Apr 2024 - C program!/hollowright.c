#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=i;j<N;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==i||j==1||i==N)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}

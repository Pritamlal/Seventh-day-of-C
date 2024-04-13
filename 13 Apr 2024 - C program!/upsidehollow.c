#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=i;j<=N;j++)
		{
			if(i==j||j==N||i==1)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}

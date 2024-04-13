#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the Number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==N||j==1||j==i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

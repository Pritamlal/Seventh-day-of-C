#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter hte rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i==1||j==1||i==rows||j==rows||i==j||j==(rows-i+1))
			{
				printf("*  ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
}

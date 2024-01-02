/*
	*
       * *
      *   *
     *     *
      *   *
       * *
        *
*/
#include <stdio.h>
int main()
{
	int N;
	printf("Enter your number : ");
	scanf("%d",&N);
	for(int i=1;i<=1;i++)
	{
		for(int k=1;k<=N-i;k++)
		{
			printf(" ");
		}
		if(i==1)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int j=2;j<=N;j++)
	{
		for(int k=2;k<=N-j;k++)
		{
			printf(" ");
		}
		printf("* ");
		for(int i=1;i<=N-i;i++)
		{
			printf("  ");
		}
		printf("*\n");
		
	}
}

/*
   *
  * *
 * * *
  * *
   * 
*/
#include <stdio.h>
int main()
{
	int N;
	printf("Enter your number : ");
	scanf("%d",&N);
	for(int k=1;k<=N;k++)
	{
		for(int i=1;i<=N-k;i++)
		{
			printf(" ");
		}
		for(int j=1;j<=k;j++)
		{
			printf("* ");
		}
		printf("\n");
        }
        for(int k=1;k<=N;k++)
        {	
        	for(int i=1;i<=k;i++)
        	{
        		printf(" ");
        	}
        	for(int j=1;j<=N-k;j++)
        	{
        		printf("* ");
        	}
        	printf("\n");
        }
}

/*
    1
   121
  12321
 1234321 */
   
#include<stdio.h>
int main()
{
	int n;
	printf("Enter your number : ");
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		for(int m=i-1;m>0;m--)
		{
			printf("%d ",m);
		}
		printf("\n");
	}
	return 0;
}

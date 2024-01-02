#include <stdio.h>//column magic square
int main()
{
	int n,i=0,k=1;
	printf("Enter no.: ");
	scanf("%d",&n);
	int arr[n][n];
	for(i;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[j][i]=k;
			k++;
		}	
	}
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++)
	 	{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

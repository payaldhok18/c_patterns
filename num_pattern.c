/* 1   2   3   4   5 
 16  17  18  19   6 
 15  24  25  20   7 
 14  23  22  21   8 
 13  12  11  10   9 */
#include <stdio.h>
int main()
{
	int n,i,j,k=1;
	printf("Enter odd number: ");
	scanf("%d",&n);
	int arr[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i;j++)
		{
			arr[i][j]=k++;
			
		}
		for(j=i+1;j<=n-1-i;j++)
		{
			arr[j][n-i-1]=k++;
		}
		for(j=n-i-2;j>=i;j--)
		{
			arr[n-i-1][j]=k++;
		}
		for(j=n-2-i;j>i;j--)
		{
			arr[j][i]=k++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
return 0;
}

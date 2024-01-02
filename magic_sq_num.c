/*17    24     1     8    15 
23     5     7    14    16 
4      6    13    20    22
10    12    19    21     3 
11    18    25     2     9 */

#include <stdio.h>
int main()
{
	int n,k;
	printf("Enter your no: ");
	scanf("%d", &n);
	
	int arr[n][n];

    for(int i=0; i<n; i++)
	{
		for(int k=0; k<n; k++)
		{
			arr[i][k]=0;
		}
	}
	int count=1;
	int j=(n-1)/2;
	int i=0;
	arr[i][j]=count;

	while(count<=n*n)
	{
		count++;
		if( (i==0)&&(j==n-1) )
		{
			i++;
		}
		else if(i==0)
		{
			i=n-1;
			j=j+1;
		}
		else if(j==n-1)
		{
			i=i-1;
			j=0;
		}
		else if(arr[i-1][j+1]!=0)
		{
			i++;
		}
		else
		{
			i--;
			j++;
		}
		arr[i][j]=count;	
	}
	for(int i=0; i<n; i++ )
	{
	
		for(int j=0; j<n; j++)
		{
			printf("%5d ",arr[i][j]);
		}
		printf("\n");
	}
return 0;
}
	
	

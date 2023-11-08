1 2 3 4 5
10 9 8 7 6 
11 12 13 14 15 
20 19 18 17 16 

#include <stdio.h>

int main(void) {
	// your code goes here
	int N,k=1;
	scanf("%d",&N);
	for(int i=1; i<=N; i++)
	{
	    if(i%2!=0)
	    {
	        for(int i=0; i<5; i++)
	        {
	            printf("%d ",k);
	            k++;
	        }
	    }
	    else
	    {
	        int j=k+4;
	        for(int i=0; i<5; i++)
	        {
	            printf("%d ",j);
	            j--;
	        }
	        k=j+6;
	    }
	    printf("\n");
	}
	return 0;
}


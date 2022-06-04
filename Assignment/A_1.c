#include <stdio.h>
///solved_1
int main()
    {
    	int i, n, sum=0;
    	printf("input value of n terms:");
    	scanf("%d", &n);


    	for (i=1; i<=n; i++)
    	{
    		printf("%d\n",i);
    		sum = sum + i;
    	}
    	printf ("\n The sum of natural numbers : %d",sum);
    	return 0;
    }

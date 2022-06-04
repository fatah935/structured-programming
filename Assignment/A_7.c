#include <stdio.h>
///solved_7
int main()
    {
    	int n,i;
    	printf("prime numbers from 1 to 200 are:\n");
    	for(n=2;n<=200;n++)
    	{
    		for(i=2;i<=n;i++)
    		{
    			if(n%i==0)
    			break;
			}
			if(i>n/2)
			printf("%d\n",n);
		}
		return 0;
	}

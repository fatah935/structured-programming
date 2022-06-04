#include<stdio.h>
///solved_3
int main()
{
  int i,n,sum = 0; ///n=number

  printf("Enter n term of Value : \n");
  scanf("%d", &n);

  printf(" n term of odd numbers are :\n", n);
  for(i = 1; i <= n; i++)
  {
  	if ( i%2!= 0 )
  	{
  		printf("%d\n", i);
        sum = sum + i;
  	}
}
  printf(" The Sum of Odd Numbers= %d\n", sum);

  return 0;
}

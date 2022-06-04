#include<stdio.h>
///solved_6
int main()
{
    int i, n, sum = 0;

    printf("Enter n term of Value :\n");
    scanf("%d", &n);

    printf("n term of even numbers are :\n", n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }

    }

    printf("Sum of even numbers from 1 To %d is %d\n", n, sum);

    return 0;
}

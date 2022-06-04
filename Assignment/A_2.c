#include <stdio.h>
///solved_2
int main()
{
int a,i,sum=0;
float avg;
printf("Enter 10 numbers:\n");
for(i=0;i<10;i++)
{
  printf("-");
  scanf("%d",&a);
  sum= sum+a;
}
printf("Sum: %d\n",sum);
avg=sum/10.0;
printf("Average: %.2f\n",avg);
return 0;

}

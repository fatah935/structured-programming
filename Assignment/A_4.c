#include<stdio.h>
 ///solved_4
int main()
{
    int k=4,i,j;
    int n=2;
   for (i = 2; i <=k;i++) {
        for (j =1; j <= i;++j){
            printf("%d ", n);
           ++n;
        }
        printf("\n");
		}
   return 0;
}

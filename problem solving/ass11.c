#include <stdio.h>
#include <stdlib.h>
int main(void){

  int i,n,sum=0;

      printf("Enter a positive integer:");
      scanf("%d",&n);

      for ( i=1; i<=n; i++)
      {
       sum+=i;
       printf("sum =%d\n",sum);
      }
      printf(" sum is equal : %d",sum);
      return 0;
}

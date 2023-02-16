#include <stdio.h>
#include <stdlib.h>
int main(void){

  int i,n,f;

    printf("enter  positive integer :");
    scanf("%d",&n);
if (n<0)
    printf("Error! Factorial of a negative number doesn't exist.");
else{
    for (i=1; i<=n; i++)
    {
        f*=i;
        printf(" the factorial = %d\n",f);
    }
}
        printf("the sum of factorial = %d",f);

}

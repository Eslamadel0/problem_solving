#include <stdio.h>
#include <stdlib.h>
int main(void){

  float grade;

    printf("please  enter your  grade :");
    scanf("%f",&grade);

    if (grade>=85)
    {
        printf("your grade is Excellent");
    }
    else if(grade >=75)
    {
        printf("your grade is very good");
    }
    else if (grade >=65)
    {
        printf("your grade is good");
    }
    else if (grade >=50)
    {
        printf("your grade is pss");
    }
    else if (grade<50)
    {
        printf("your grade is fail ");
    }
}

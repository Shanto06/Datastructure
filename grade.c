#include<stdio.h>

int main()
{
    double marks;
    printf("the marks:");
    scanf("%lf",&marks);
    if(marks>=80)
        printf("the grade is A+\n");
    else if(marks>=75)
        printf("the grade is A\n");
    else if(marks>=70)
        printf("the grade is A-\n");
    else if(marks>=65)
        printf("the grade is B+\n");
    else if(marks>=60)
        printf("the grade is B\n");
    else if (marks>=55)
        printf("the grade is B-\n");
    else if(marks>=50)
        printf("the grade is C+\n");
    else if (marks>=45)
        printf("the grade is C\n");
    else if(marks>=40)
        printf("the grade is C-\n");
    else
        printf("the grade is F\n");
    return 0;
}

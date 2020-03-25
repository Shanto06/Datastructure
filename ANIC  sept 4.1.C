#include<stdio.h>

int main()
{
    char s[20],s1[20];
    scanf("%s",s);
    scanf("%s",s1);
    printf("(a) %s %s\n",s,s1);
    printf("(b) %4s\n%10s\n",s,s1);
    printf("(c) %.1s.%.1s\n",s,s1);
    return 0;
}

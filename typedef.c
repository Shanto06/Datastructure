#include<stdio.h>

struct book
{
    char ch[20];
    int age;
};

int main()
{
    typedef struct book Book;
    Book b={"shanto",20};

    printf("name=%s\n",b.ch);
    printf("age=%d\n",b.age);

}

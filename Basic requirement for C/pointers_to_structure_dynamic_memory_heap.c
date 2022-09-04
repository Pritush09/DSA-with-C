#include<stdio.h>
#include<stdlib.h>

struct Rectangle{
    int Lenght;
    int breadth;
};

int main()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->Lenght=5;
    p->breadth=4;
    printf("%d %d",p->Lenght,p->breadth);
    free(p);
}
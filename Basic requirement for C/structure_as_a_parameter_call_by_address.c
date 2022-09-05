#include<stdio.h>
#include<stdlib.h>

struct Rec{
    int l;
    int b;
};

int area(struct Rec *p){// as we are passing by address it should take it as pointer
    return (p->l*p->b);
}

int main(){
    int s;
    struct Rec p;
    printf("Enter the value for lenght : ");
    scanf("%d",&p.l);
    printf("Enter the valu for breadth : ");\
    scanf("%d",&p.b);
    s = area(&p);
    printf("%d",s);
}
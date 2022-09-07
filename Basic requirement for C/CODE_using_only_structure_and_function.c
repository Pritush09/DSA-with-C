#include<stdio.h>
#include<stdlib.h>

struct Rectangle{
    int lenght;
    int breadth;
};

int initialise(struct Rectangle *p,int x,int y){
    p->lenght = x;
    p->breadth = y;
}

int change_lenght(struct Rectangle *p,int l){
    p->lenght = l;
}

int area(struct Rectangle r){
    return (r.lenght*r.breadth);
}

int main(){
    struct Rectangle r;
    initialise(&r,10,20);
    change_lenght(&r,15);
    area(r);
    printf("All task completed smoothly");
}-
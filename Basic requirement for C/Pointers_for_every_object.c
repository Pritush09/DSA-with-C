#include<stdio.h>

struct Rectangle{
    int lenght;
    int breadth;
};

int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    printf("%d",sizeof(p1));
    printf("%d",sizeof(p2));
    printf("%d",sizeof(p3));
    printf("%d",sizeof(p4));
    printf("%d",sizeof(p5));
}
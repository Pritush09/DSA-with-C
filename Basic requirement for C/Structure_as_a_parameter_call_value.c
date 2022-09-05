#include<stdio.h>
#include<stdlib.h>

struct Rectangle{
    int Lenght;
    int breadth;
};

int area(struct Rectangle r1){// iska variable jo ye lega vo kesa hoga same nahi he main me jo he uski tarah
    return (r1.Lenght*r1.breadth);
}

int main(){


    struct Rectangle r;
    printf("Enter the value for lenght : ");
    scanf("%d",&r.Lenght);
    printf("\n");
    printf("Enter the value for breadth : ");
    scanf("%d",&r.breadth);
    printf("%d",area(r));
}
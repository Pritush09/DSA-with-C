#include<stdio.h>

int add(int x,int y){
    int c;
    c = x + y;
    return c;
}

int main(){
    int x;
    int y;
    printf("Enter the number :");
    scanf("%d",&x);
    printf("\n");
    printf("Enter the second number : ");
    scanf("%d",&y);
    printf("\n");
    printf("%d",add(x,y));
}
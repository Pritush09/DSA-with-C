#include<stdio.h>

int swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    return x,y;
}

// we can sewe that the passing by value is not good option here for swaping

int main(){
    int s;
    int m;
    m = 5;
    s= 2;
    s,m = swap(s,m);
    printf("%d , %d",s,m);
}
#include<stdio.h>

int swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}

// we can see that this  is call by address for swaping

int main(){
    int s;
    int m;
    m = 5;
    s= 2;
    swap(&s,&m);
    printf("%d , %d",s,m);
}
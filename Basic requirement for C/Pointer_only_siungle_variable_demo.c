#include<stdio.h>

int main(){
    int a=9;
    int *p;
    p = &a;
    printf("%d %d",*p,a);// *p se data ka value milega aur sirf p se location in heap milega
}


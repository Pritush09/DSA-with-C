#include<stdio.h>


int main(){
    int a[5]={1,2,3,4,5};
    int *p;
    p = a; //yaha ese initialise karte he kyuki a name itself pehla istself is the starting address of an array so it can store the address
    // if want to use &  then p = &a[0] tab jake wesa kaam hoga

    //we can access all the elements of the array using pointer
    for (int i=0;i<5;i++){
        printf("%d ",p[i]);// p is a pointer which act as an array
    }
}

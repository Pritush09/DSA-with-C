#include<stdio.h>
#include<stdlib.h>




// this is for creating an array in heap

int main(){
    int *p;// this in stack 
    p=(int *)malloc(5*sizeof(int));// this is in heap

    //we assign the values
    p[0]=0; p[1]=1; p[2]=2;

    for (int j=0;j<5;j++){
        printf("%d ",p[j]);// p is a pointer which act as an array
    }
}
#include<stdio.h>
#include<stdlib.h>

int * fun(int x){    // []is an old syntax and is not supported now so we use * after int * fun()
    int *p;
    p = (int *)malloc(x*sizeof(int));
    p[0]=1;
    return (p);
}
//The above function is creating an array as the array is not present in main  


int main(){
    int *A;
    A = fun(5);
    printf("%d\n",A);
    for(int i =0;i<5;i++){
        printf("%d ",A[i]);
    }
}
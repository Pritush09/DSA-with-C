#include<stdio.h>
#include<stdlib.h>

struct Test{
    int A[5];
    int n;//this is the size of the array
};

int prac(struct Test t1){  // here we can pass  the whole structure even if it has an array as array cannot be passed by value only by address
    for(int i = 0;i<t1.n;i++){
        printf("%d ",t1.A[i]);
    }
}

int main(){
    struct Test t= {{1,2,3,4,5},5};
    prac(t);
}
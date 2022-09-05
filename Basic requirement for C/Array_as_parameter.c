#include<stdio.h>


//we can also change the value for the given data using function
int fun(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

}

int main(){
    int A[5] = {1,2,3,4,5};
    fun(A,5);
}
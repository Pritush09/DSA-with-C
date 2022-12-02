#include<stdio.h>
#include<stdlib.h>

int A[5]={1,3,4,2,5};

void swap(int *j,int *i){
    int t;
    t=*j;
    *j=*i;
    *i=t;
}
int main(){
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(A[j]<A[i]){
                swap(&A[j],&A[i]);
            }
        }
    }

    for(int k=0;k<5;k++){
        printf("%d",A[k]);
    }

    printf("\nthe max element is %d",A[4]);
    printf("\nthe min element is %d",A[0]);

}
#include<stdio.h>
// O(n2) max time and if the array is already sorted then O(n)
int swap(int *x,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

int bubble_sort(int A [],int n){
    int flag; // this is for checking whether the array is already sorted or not
    for(int i = 0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if (A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if (flag==0){
            break;
        }
    }
}

int main(){
    int A[5]={1,4,7,3,5};
    bubble_sort(A,5);
    for (int i=0;i<5;i++){
        printf("%d ",A[i]);
    }
}
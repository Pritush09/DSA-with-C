#include<stdio.h>

// we use 3 variable  one will point at first place and one will compare other element with it and one will point towards the smallest element
// it is not adaptive as it should take minimum bumber of time when the array is already sorted
// it is not stable as the 1st occurance is not preserve in the first 
// it takes O(n2) time even if the array is sorted

int swap(int *x,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

int selection_sort(int A[],int n){
    int i,j,k;
    for (i=0;i<n-1;i++){
        for (j=k=i;j<n;j++){
            if (A[j]<A[k]){
                k=j;
            }
        }
        swap(&A[i],&A[k]);
    }
}

int main(){
    int A[6]={1,3,4,5,6,2};
    selection_sort(A,6);
    for (int i=0;i<6;i++){
        printf("%d ",A[i]);
    }
}
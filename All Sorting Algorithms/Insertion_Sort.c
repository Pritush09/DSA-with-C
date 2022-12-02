#include<stdio.h>

// we assume that the first element is already sorted then we will just pick the next element and inisert in the place of first
// in this we will not get anything usefull int the intemideate of insertion algorithim
// we insert the element from position 1 as first is allready assumed to be sorted
//Adaptive as it will not goin while loop unless and untill the conditionis satisfied
// Stable also
  
int insertion_sort(int A[],int n){
    int x;
    int j;
    for (int i=1;i<n;i++){
        j = i-1;
        x = A[i];
        while (j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main(){
    int A[5]={1,4,5,3,2};
    insertion_sort(A,5);
    for(int i=0;i<5;i++){
        printf("%d ",A[i]);
    }

}
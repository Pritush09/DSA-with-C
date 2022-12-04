#include<stdio.h>

int k[100];
int mn=0;

int merge(int A[],int M[],int a,int m){
    int i=0,j=0;
    while (i<m && j<a){
        if (A[j]>M[i]){
            k[mn]=M[i];
            i++;
            mn++;
        }
        else if (A[j]<M[i]){
            k[mn]=A[j];
            j++;
            mn++;
        }
        else{
            k[mn]=A[j];
            j++;
            mn++;
        }
    }
    while (i<m){
        k[mn]=M[i];
        i++;
        mn++;
    }
    while(j<a){
        k[mn]=A[j];
        j++;
        mn++;
    }
}

int main(){
    int a[3]={1,3,4};
    int m[3]={4,5,6};
    merge(a,m,3,3);
    for (int i =0;i<mn;i++){
        printf("%d ",k[i]);
    }
}
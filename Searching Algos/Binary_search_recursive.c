#include<stdio.h>

int A[10]= {1,2,3,4,5,6,7,8,8,9};


int binary_sr(int m,int n,int num){
    int mid,no;
    mid=n+m/2;
    if(mid>0){
        if(A[mid]==num){
            return mid;
        }
        else if(no<num){
            return binary_sr(mid+1,n,num);
        }
        else{
            return binary_sr(m,mid-1,num);
        }
    }
    return -1;
}

int main(){
    int num,mi;
    printf("\nEnter the number u want to search : ");
    scanf("%d",&num);
    mi = binary_sr(0,10,num);
    if(mi==-1){
        printf("\nNo. not present");
    }
    
    printf("THe no. is found position %d",mi);
}
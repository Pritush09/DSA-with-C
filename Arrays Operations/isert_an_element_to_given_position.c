#include<stdio.h>

int A[5]={1,2,3,4};

int main(){
    int pos,val;
    printf("\nEnter the position where u wan t to insert : ");
    scanf("%d",&pos);

    for(int i=3;i>-1;i--){
        if(pos>i){
            break;
        }
        if(pos-1==i){
            break;
        }
        A[i+1]=A[i];

    }
    printf("\nEnter the vlaue u want to insert : ");
    scanf("%d ",&val);
    A[pos]= val;

    for(int i=0;i<5;i++){
        printf("%d",A[i]);
    }
}
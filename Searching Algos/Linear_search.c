#include<stdio.h>

int A[5]= {1,2,3,4,5};

int main(){
    int val;
    printf("Enter the no. u wanna search : ");
    scanf("%d",&val);
    int flag=1;
    for(int i=0;i<5;i++){
        if(A[i]==val){
            printf("\n THe no. is present at postion %d",i);
            flag=0;
            break;
        }

    }
    if(flag==1){
        printf("\nNo. is not present ");
    }
    
}
#include<stdio.h>

int A[5]={1,3,4,2,5};

int val;
int pos=0;

int main(){
    val =0;
    for(int j=0;j<5;j++){
        if (val<A[j]){
            val=A[j];
            pos++;   
        }
        
    }
    printf("%d",val);
    printf("\n%d",pos);
}
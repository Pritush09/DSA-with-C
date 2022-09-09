#include<stdio.h>


int m;//this is the global variable 

int fun(int x){
    static int n;// this will be created only once in the stack part of the main memory 
    //printf("%d",n);
    if(x>0){
        n++;
        return fun(x-1)+n;
    }
    return 0;
}

int main(){
    int s;
    int n;
    printf("Enter the number : ");
    scanf("%d",&s);
    n = fun(s);
    printf("%d",n);
}
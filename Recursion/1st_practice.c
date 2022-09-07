#include<stdio.h>
#include<stdlib.h>

int func(int x){
    if (x>0){
        func(x-1);
        printf("%d ",x);
    }
}

int main(){
    int a=3;
    func(a);
}


//it can be done other way by calling it afterwards and printing first 
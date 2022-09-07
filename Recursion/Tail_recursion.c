#include<stdio.h>
#include<stdlib.h>

int func(int x){
    if (x>0){
        printf("%d ",x);
        func(x-1); // here the function call irself at the very end of the it 
        // but if we add something with it after it then it is not the tail recursion like (fun()+n;)
    }
}

int main(){
    int a=3;
    func(a);
}

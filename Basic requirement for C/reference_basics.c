#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 10;
    int r = a; // now the r becomes the reference for the variable a it does not take any extra memory and point to the same address

    //int b=9;
    //r =b;  here the r value of a will be overwrite by the b value but the r will not behave as referrence for b it will reffer to a only

    printf("%d , %d",a,r);
    return 0;

}

// &a karne se uska memory dikai deta h kaha pe vo store h 
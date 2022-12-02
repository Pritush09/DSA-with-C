#include<stdio.h>
#include<stdlib.h>
#define maxsize 3
int stck[maxsize];
int top=-1;

void push(int n){
    if (top==maxsize-1){
        printf("\nStack Overflow");
    }
    else{
        top++;
        stck[top]=n;
    }
}

int pop(){
    int m;
    if(top==0){
        printf("Stack Underflow");
        return -1;
    }
    else{
        m=stck[top];
        top--;
        return m;
    }
    return -1;
}

void display(){
    for(int i=top;i>=0;i--){
        printf("%d ",stck[i]);
    }
}



int main(){
    int ch,x;
    while(1){
        printf("\nENTER YOUR CHOICE");
        printf("\n1 - push \n2 - pop \n3 - Display \n4 - Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nEnter the number you want to push : ");
                scanf("%d",&x);
                push(x);
                break;
            case 2:
                x=pop();
                if (x!=-1){
                    printf("\npopped element is %d",x);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
    
}
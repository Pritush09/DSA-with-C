#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


#define max 100
int stck[max];
int top=-1;


void push(int n){
    stck[++top]=n;
}

int pop(){
    return stck[top--];
}

int main(){
    int i,val,x,y;
    char exp[max];
    printf("\nEnter the postfix expression : ");
    gets(exp);

    for(i=0;exp[i]!='\0';i++){
        if (isalpha(exp[i])){
            printf("\nEnter %c : ",exp[i]);
            scanf("%s",&val);
            push(val);
        }
        else{
            x=pop();
            y=pop();
            switch(exp[i]){
                case '+':
                    push(y+x);
                    break;
                case '-':
                    push(y-x);
                    break;
                case '*':
                    push(y*x);
                    break;
                case '/':
                    push(y/x);
                    break;
                case '%':
                    push(y%x);
                    break;
                case '^':
                    push(pow(y,x));
                    break;
                default:
                    exit(0);
            }
        }
    }
    printf("\nthe result is %d",exp[top]);
}

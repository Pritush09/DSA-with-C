#include<stdio.h>
#include<stdlib.h>

int arr[3];
int f=-1,r=-1;

void insert(int n){
    if (f==r==-1){
        f=r=0;
        arr[r]=n;
    }
    else if (r==3-1){
        printf("\nQueue Overflow");
    }
    else{
        r++;
        arr[r]=n;
    }
}

int delete(){
    if(r==-1){
        printf("\nQueue Underflow");
        return -1;
    }
    else{
        int n;
        n=arr[f];
        f=f+1;
        return n;
    }
}

void display(){
    if (f==r || f==r==-1){
        printf("Empty");
    }
    for(int i=f;i<r;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int ch,x;
    while (1){
        printf("\n1 - insert \n2 - delete \n3 - Display \n4 - Exit\n");
        scanf("%d",&ch);
    
        switch(ch){
            case 1:
                printf("\nEnter the number u want to insert : ");
                scanf("%d",&x);
                insert(x);
                break;

            case 2:
                x=delete();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
        }
    }
}


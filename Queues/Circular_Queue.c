#include<stdio.h>
#include<stdlib.h>
int arr[3];
int f=-1,r=-1;


void insert(int n){
    if (f==r==-1){
        f=r=0;
        arr[r]=n;
    }
    else if (f<r){
        if (f==0 && r==3-1){
            printf("\nOverflow");
        }
        else if(f>0 && r==3-1){
            r=0;
            arr[r]=n;
        }
        else{
            r++;
            arr[r]=n;
        }
    }
    else{
        if (f==r+1){
            printf("\nOverflow");
        }
        else{
            r++;
            arr[r]=n;
        }

    }
}

void delete(){
    if(r==-1){
        printf("\nQueue Underflow");
    }
    else if (f>r){
        if (f==3-1){

            f=0;
        }
        else{
            f++;
        }
    }
    else{
        f++;
    }
}

void display(){
    if (f<r){
        for(int i=f;i<=r;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        for(int i=f;i<3;i++){
            printf("%d ",arr[i]);
        }
        for(int j=r;j<f;j++){
            printf("%d ",arr[j]);
        }
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
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
        }
    }
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*first=NULL; // this become the global which can be used by every function

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void insert_begining(struct node *p){
    p->next=first;
    first = p;
}

void create(){
    int d;
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data u want to insert : ");
    scanf("%d",&d);
    n->data = d;
    insert_begining(n);
}


int main(){
    int ch,d;
    struct node *i;
    create();
    while(1){
        printf("\nENTER YOUR CHOICE\n1 - Insert at begining\n2 - Insert at end \n3 - Insert at a given location\n4 - Display\n5 - exit \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                i = (struct node *)malloc(sizeof(struct node));
                printf("\nEnter the data u want to insert : ");
                scanf("%d",&d);
                i->data = d;
                insert_begining(i);
                break;
            case 4:
                display(first);
                break;
            


            case 5:
                exit(0);
        }


    }
}

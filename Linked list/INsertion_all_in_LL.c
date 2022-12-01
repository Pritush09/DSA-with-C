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

void insert_after_a_given_location(struct node *ti,int pos){
    int i;
    struct node *p=first;
    for(i=0;i<pos-1;i++){
        p=p->next;
    }
    ti->next=p->next;
    p->next=ti;
    

}


void insert_end(struct node *tp){
    int c=0,i;
    struct node *t=first,*pt=first;
    while(t!=NULL){
        c++;
        t=t->next;
    }
    for(i=0;i<c-1;i++){
        pt=pt->next;
    }
    tp->next=pt->next;
    pt->next=tp;
}


int main(){
    int ch,d,pos;
    struct node *i;
    create();
    while(1){
        printf("\nENTER YOUR CHOICE\n1 - Insert at begining\n2 - Insert at end \n3 - Insert after a given location\n4 - Display\n5 - exit \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                i = (struct node *)malloc(sizeof(struct node));
                printf("\nEnter the data u want to insert : ");
                scanf("%d",&d);
                i->data = d;
                insert_begining(i);
                break;
            
            case 2:
                i = (struct node *)malloc(sizeof(struct node));
                printf("\nEnter the data u want to insert : ");
                scanf("%d",&d);
                i->data = d;
                insert_end(i);
                break;


            case 3:
                i = (struct node *)malloc(sizeof(struct node));
                printf("\nEnter the location after which u want to insert : ");
                scanf("%d",&pos);
                printf("\nEnter the data u want to insert : ");
                scanf("%d",&d);
                i->data = d;
                insert_after_a_given_location(i,pos);
                break;


            case 4:
                display(first);
                break;
            


            case 5:
                exit(0);
        }


    }
}

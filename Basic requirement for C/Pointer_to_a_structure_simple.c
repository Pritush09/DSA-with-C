#include<stdio.h>
#include<stdlib.h>

struct Student{
    int roll;
    char name[25];
    char dept[12];
};

int main(){
    struct Student r={10,5};
    struct Student *p = &r;
    // we will not write *p.roll as . operator has higher prefference and we also cannot write p.roll
    (*p).roll = 4; //we can use these 2 methods for initialising 
    p->roll=2;
    printf("%d",r.roll);


}
#include<stdio.h>

struct Student{
    int roll;
    char name[25];
    char dept[12];
};

struct Student s;

int main(){
    int m;
    char ma[25],n[12],raw;
    // use %s for char array otherwise %c ke sath ek aur use karna padega

    printf("Enter the roll number: ");
    scanf("%d",&m);
    printf("Enter your name: ");
    scanf("%s",&ma);
    //scanf("%c",&raw); // used this to cope up with the problem that the char also takes input as a character
    printf("Enter direct input: ");
    scanf("%s",&s.name);
    //scanf("%c",&raw);
    printf("The name is number is %s",s.name);
    return 0;
}
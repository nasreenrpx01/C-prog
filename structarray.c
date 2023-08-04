#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    char name[50];
    float cgpa;
}std;

int main(){
    std cse[100];
    std IT[100];

    cse[0].roll=1;
    printf("%d\n", cse[0].roll);

    cse[1]=(std){2,"suzie",5.6};// initializing everything in one line
    IT[1]=(std){1,"mack",7.0};//dcclare values in the order of properties declared  in struct
    printf("%s\n",IT[1].name);

    std *ptr=&cse[1];
    printf("name:%s\n",(*ptr).name);//here demonstrating the usage of pointer in structures
    std *ptr1=&IT[1];
    printf("cgpa:%.2f",ptr1->cgpa);// here demonstrating the usage of arrow operator instead dot


    return 0;
}
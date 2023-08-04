#include<stdio.h>

typedef struct comlplex{
    int real;
    int img;
}comp;

int main(){
    comp c1={2,4};
    comp *ptr=&c1;
    printf("Real:%d,Img:%d\n",ptr->real,ptr->img);


    return 0;
}
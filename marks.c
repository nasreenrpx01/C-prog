#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks out of 100:\n");
    scanf("%d",&marks);
    if(marks>30){
        printf("Pass\n");
    }else {
        printf("Fail\n");

    }
    return 0;
}
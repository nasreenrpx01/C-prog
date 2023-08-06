#include<stdio.h>

int main(){
    FILE *fptr=fopen("Studen.txt","a");//After the first entry change the mode to append inorder not to override the previous entries.

    char name[50];
    int rollno;
    float cgpa;
    
    printf("Enter Name:");
    scanf("%s",name);
    printf("Enter Rollno:");
    scanf("%d",&rollno);
    printf("Enter cgpa:");
    scanf("%f",&cgpa);

    fprintf(fptr,"Name:%s\t",name);
    fprintf(fptr,"RollNo:%d\t",rollno);
    fprintf(fptr,"Cgpa:%.2f\t",cgpa);

    fclose(fptr);
    return 0;
}
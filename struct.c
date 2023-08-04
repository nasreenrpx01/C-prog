#include<stdio.h>
#include<string.h>

 typedef struct student{
    int roll;
    char name[50];
    float cgpa;

}std;

int main(){
    std s1;
    s1.roll=1;
    //s1.name="nasreen"; really cant do it like this instead use strcpy
    strcpy(s1.name,"nasreen");
    s1.cgpa=7.1;

    printf("Roll no:%d, with name: %s, scored cgpa=%.2f\n",s1.roll,s1.name,s1.cgpa);

    std s2;
    s2.roll=2;
    strcpy(s2.name,"Yaseen");
    s2.cgpa=8.5;
    printf("Roll no:%d, with name: %s, scored cgpa=%.2f\n",s2.roll,s2.name,s2.cgpa);

    std s3;
    s3.roll=3;
    strcpy(s3.name,"Arsalaan");
    s3.cgpa=8.9;
    printf("Roll no:%d, with name: %s, scored cgpa=%.2f\n",s3.roll,s3.name,s3.cgpa);


    return 0;
}
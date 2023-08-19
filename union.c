#include<stdio.h>
#include<string.h>

typedef union student{
    int id;
    char name[50];
    float cgpa;
}un;
int main(){
un s1;
s1.id=2;
s1.cgpa=2.3;
strcpy(s1.name,"Nasreen");
printf("%d\n",s1.id);

printf("%.2f\n",s1.cgpa);
printf("%s\n",s1.name);

return 0;

}
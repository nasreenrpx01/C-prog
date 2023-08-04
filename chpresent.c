#include<stdio.h>
#include<string.h>

void checkch(char *s,char ch);

int main(){
    char *s="Nasreen";
    char ch='e';
    checkch(s,ch);
    return 0;
}

void checkch(char *s,char ch){

    for(int i=0;i<strlen(s);i++){
        if(s[i]==ch){
            printf("Found it!\n");
            return;
        }
    }
    printf("Not found :(\n");
}
#include<stdio.h>
#include<string.h>

void printString(char *s);

int main(){
    char *s ="Rabbit Teeth";
   printString(s);
    return 0;
}

void printString(char *s){
 for(int i=0;i<=strlen(s);i++){
    printf("%c\n",s[i]);
 }
 printf("\n");

}

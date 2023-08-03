#include<stdio.h>

void printAlpha(char *n);

int main(){
    char n;

printAlpha(&n);

    return 0;

}
void printAlpha(char *n){

    for(char i='a';i<='z';i++){

        *n=i;
        printf("%c\n",*n);
    }
 }


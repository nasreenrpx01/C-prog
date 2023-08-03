#include<stdio.h>
#include<string.h>

void countx(char *s);

int main(){
    char *s=" yaseenxnasreenxx";
     countx(s);


    return 0;
}

void countx(char *s){
    int Numofdigits=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='x'){
            Numofdigits++;
        }
    }
    printf("%d\n",Numofdigits);
}
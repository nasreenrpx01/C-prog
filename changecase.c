#include<stdio.h>
#include<ctype.h>
#include<string.h>

void changecase(char *s);

int main(){
    char s[]="nasreen";
    changecase(s);
   printf("%s",s);


    return 0;
}
void changecase(char *s){

    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'){
            s[i]=toupper(s[i]);
        }
    }
}
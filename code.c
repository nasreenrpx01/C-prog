#include<stdio.h>
#include<string.h>
int palindrome(char *string){
    char string,s1,s2;
    strcpy(s1,string);
   s2= strrev(s1);
    if(s2==string){
        return 1;
    }else{
        return 0;
    }
}
int main(void){
    char string;
    printf("Enter the string to check whether its palindrome or not\n");
    gets(string);

}
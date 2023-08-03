#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void salting(char *pwd);

int main() {
    char pwd[100];
   printf("Enter password:");
   scanf("%s",pwd);
    salting(pwd);

    return 0;
}

void salting(char *pwd) {
    char newpwd[150];
    char *s = "123";

    strcpy(newpwd, pwd);
    strcat(newpwd, s);

    puts(newpwd);
}

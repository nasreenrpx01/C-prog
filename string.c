#include <stdio.h>
#include <string.h>

void length(char *s);

int main()
{
    char s[100];
    printf("enter your name:\n");
    fgets(s, 100, stdin);
    puts(s);
    printf("%lu\n", strlen(s));
    length(s);
    return 0;
}
void length(char *s)
{
    int len=0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    printf("%d", len-1);
}
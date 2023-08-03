#include <stdio.h>

int main() {
    char string[50];
    char ch;
    int i = 0;
    for (; ch != '\n' && i < 49; i++) {
        scanf("%c", &ch);
        string[i] = ch;
    }

    string[i] = '\0'; // Terminate the string with null character

    printf("%s", string);

    return 0;
}

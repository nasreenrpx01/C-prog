#include<stdio.h>
#include<string.h>
#include<ctype.h>

void checkfrequency(char *s);

int main(){
    char *s="nasreen";
    checkfrequency(s);

    return 0;
}

void checkfrequency(char *s){
    int frequencies[256] = {0}; 
    int highestFrequency = 0;
    char mostFrequentChar;

    for (int i = 0; i < strlen(s); i++) {
        char currentChar = s[i];
        frequencies[(int)currentChar]++;
        if (frequencies[(int)currentChar] > highestFrequency) {
            highestFrequency = frequencies[(int)currentChar];
            mostFrequentChar = currentChar;
        }
    }

    printf("The character '%c' has the highest frequency, which is %d\n", mostFrequentChar, highestFrequency);
}
    
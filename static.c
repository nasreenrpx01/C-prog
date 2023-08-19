#include <stdio.h>

int func(int n);
int random();

int main()
{
    int a = func(0);
    printf("%d\n", a);
     a = func(0);
    printf("%d\n", a);

    return 0;
}
int random(){
    return 32;
}
int func(int n)
{
    static int a = 6;//if we assign random( ) instead of 6 it will give an error as"initializer element is not constant"
    a++;
    return a;
}
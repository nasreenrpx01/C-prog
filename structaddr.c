#include<stdio.h>
#include<string.h>

typedef struct address {
    int houseno;
    int blockno;
    char city[50];
    char state[50];

}addr;

void printInfo(addr s1);

int main(){
    addr s1={1,3,"hyd","telangana"};
    addr s2 ={2,4,"pune","maharashtra"};
    printInfo(s1);

    return 0;
}

void printInfo(addr s1){
    printf("%d,%d,%s,%s",s1.houseno,s1.blockno,s1.city,s1.state);
}
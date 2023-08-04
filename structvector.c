#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}vect;

void calsum(vect v1,vect v2, vect sum);

int main(){
    vect v1={2,4};
    vect v2={3,9};
    vect sum={0};

     calsum(v1,v2,sum);

    return 0;
}

void calsum(vect v1,vect v2,vect sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum=/{%d,%d}",sum.x,sum.y);
}
#include<stdio.h>

void Countodd(int arr[]);

int main(){
    int arr[]={2,3,4,5,6,7,8,9};
    Countodd(arr);
    return 0;
}

void Countodd(int arr[]){
    int NumofDigits=0;
    for(int i=0;i<8;i++){
        if(arr[i]%2==1){
            NumofDigits++;
        }
    }
    printf("Count=%d",NumofDigits);
}
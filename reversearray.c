#include<stdio.h>

void reverse(int arr[]);
int main(){
    int arr[]={1,2,3,4,5};

reverse(arr);

    return 0;
}
void reverse(int arr[]){
for(int i=5;i>=1;i--){
    printf("%d\t",i);
}

}
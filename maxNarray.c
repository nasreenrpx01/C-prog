#include<stdio.h>

int max(int arr[],int n);

int main(){
    int arr[]={1,2,4,5,6,7};
   
    printf("%d", max(arr,6));


    return 0;
}
int max(int arr[],int n){
    int num=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>num){
          num =arr[i];
        }
    }
    return num;
}
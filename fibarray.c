#include<stdio.h>

int printFib(int arr[],int n);

int main(){
    int n; 
    printf("Enter the nth number: \n");
    scanf("%d",&n);
    int arr[n];
printFib(arr,n);

    return 0;
}
int printFib(int arr[],int n){
     if (n >= 1) {
        arr[0] = 0;
    }
    if (n >= 2) {
        arr[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
 
for(int i=0;i<n;i++){
  printf("%d\t",arr[i]);  

}
}
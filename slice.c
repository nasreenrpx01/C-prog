#include<stdio.h>

void slice(char *s,int m,int n);

int main(){
    char *s="Nasreen";
    int m,n;
    printf("Enter initial index and ending index:");
    scanf("%d %d",&m,&n);
    slice(s,m,n);

    
    return 0;
}

void slice(char *s,int m,int n){
    for(int i=m;i<=n;i++){
        printf("%c",s[i]);
    }

}
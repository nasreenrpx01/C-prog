#include<stdio.h>
#include<math.h>

int isArmstrong(int num){
    int originalNum=num;
    int numDigits=0;
    int sum=0;
    
    //Count the  number of digits in the number
    while(num!=0){
        numDigits++;
        num/=10;
    }

    //Reset num to the original value
    num=originalNum;

    //Calculate the sum digits raised to the power of numDigits
    while(num!=0){
        int digit = num%10;
        sum+= pow(digit,numDigits);
        num/=10;
    }
    
    //check if the sum is equal to the original value/number
    return sum==originalNum;

}

 int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(isArmstrong(num)){
        printf("%d is an Armstrong number.\n",num);
    }else{
        printf("%d is not an Armstrong number.\n ",num);      
    }
return 0;
 }
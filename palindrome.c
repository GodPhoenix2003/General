#include<stdio.h>

void main(){
    int n,r,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        r=temp%10;
        sum=(sum*10)+r;
        temp=temp/10;
    }
    if(n==sum)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
#include<stdio.h>
#include<math.h>

void main(){
    int n,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0){
        int x=temp%10;
        sum=sum+pow(x,3);
        temp=temp/10;
    }
    if(n==sum)
        printf("%d is Arm",n);
    else
        printf("%d is not arm",n);
}
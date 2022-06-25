#include<stdio.h>
#include<windows.h>

void main(){
    int yr;
    printf("Enter the year: ");
    scanf("%d", &yr);
    int last=yr%100;
    if(last%4==0){
        printf("%d is a leap year.", yr);
        
    }
    else
        printf("%d is not a leap year.", yr);
}
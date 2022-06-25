#include <stdio.h>



int facto(int n){
    /*int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);*/
    if(n==0){
        return(1);
    }
    else{
        return(n*facto(n-1));
    }
}
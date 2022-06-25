// Print all even numbers in between 1 nad 100. (using while loop)
#include<stdio.h>
void main(){
    int i=2,k=0;
    while(i<=100){
        if(i<=50){
            printf("%d  ", i);
            i+=2;
        }
        else{
            if(k==0){
                printf("\n");
                k++;
            }
            printf("%d  ", i);
            i+=2;
        }
    }
}

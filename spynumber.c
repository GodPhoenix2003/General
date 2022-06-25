#include <stdio.h>

int spycheck(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(spycheck(n) == 1)
        printf("\n%d is a Spy Number\n", n);
    else
        printf("\n%d is not a Spy Number\n", n);
}

int spycheck(int N){
    int dup = N, sum = 0, prdct = 1;
    while(dup > 0){
        sum += (dup % 10);
        dup = dup / 10;
    }
    while(N > 0){
        prdct *= (N % 10);
        N = N / 10;
    }
    if(sum == prdct)
        return(1);
    else
        return(0);
}
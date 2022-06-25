#include <stdio.h>
#include <math.h>

int neoncheck(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(neoncheck(n) == 1)
        printf("\n%d is a Neon Number\n", n);
    else
        printf("\n%d is not a Neon Number\n", n);
}

int neoncheck(int N){
    int sqr = (int)pow(N, 2);
    int sum = 0;
    while(sqr > 0){
        sum += (sqr % 10);
        sum = sum / 10;
    }
    if(sum == N)
        return(1);
    else
        return(0);
}
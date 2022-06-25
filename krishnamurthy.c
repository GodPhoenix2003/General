#include <stdio.h>

int facto(int x);
void iskrishnamurthy(int N);

void main(){
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d", &n);
    iskrishnamurthy(n);
}

int facto(int x){
    if(x==0)
        return(1);
    return(x*facto(x-1));
}

void iskrishnamurthy(int N){
    int dup=N,sum=0;
    while(dup>0){
        int w=dup%10;
        dup=dup/10;
        sum=sum+facto(w);
    }
    if(N==sum)
        printf("%d is a Krishnamurthy Number.",N);
    else
        printf("%d is not a Krishnamurthy Number.",N);
}
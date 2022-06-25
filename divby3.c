// Print the number of numbers divisible by 3 within the range ‘n’ and ‘m’, which will be specified by the user. (using for loop)
#include<stdio.h>
void main(){
    int i,n,m,flag=0;
    printf("Enter the lower and upper limits of the range to be checked:\n");
    scanf("%d %d", &n, &m);
    for(i=n; i<=m; i++){
        if(i%3==0){
            flag++;
        }
        else{
            continue;
        }
    }
    printf("Number of numbers divisible by 3 within the range %d and %d is:%d", n,m,flag);
}

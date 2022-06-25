#include<stdio.h>

void main(){
    float x, y;
    printf("Enter the two numbers:\n");
    scanf("%f %f", &x, &y);
    int sum = (int)x+y;
    printf("%d + %d = %d\n", (int)x, (int)y, sum);
    printf("%d * %d = %f", (int)x, (int)y, x*y);
}
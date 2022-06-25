// Swap two numbers.
#include<stdio.h>
 void main(){
     int x, y;
     printf("Enter the two numbers:\n");
     scanf("%d %d", &x, &y);
     printf("Before Swapping: x = %d, y = %d\n", x, y);
     int temp = x;
     x = y;
     y = temp;
     printf("After Swapping: x = %d, y = %d", x, y);
 }

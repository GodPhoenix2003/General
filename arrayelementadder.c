#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,sum=0;
    int *a;
    printf("\nEnter the array size: ");
    scanf("%d", &n);
    a=malloc(n*sizeof(int));
    printf("\nEnter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(int i=0;i<n;i++)
        sum=sum+a[i];
    printf("\nSum of the array elements: %d", sum);
}
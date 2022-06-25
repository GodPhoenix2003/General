#include <stdio.h>
#include <stdlib.h>

void main(){
    int n;
    int *a;
    int *b;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    a=malloc(n*sizeof(int));
    b=malloc(n*sizeof(int));
    printf("\nEnter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("\nOriginal Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
    for(int i=0,j=(n-1);i<n && j>=0;i++,j--)
        b[i]=a[j];
    printf("\nReversed Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ", b[i]);
}
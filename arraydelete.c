#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,x;
    int *a;
    printf("Enter the array size: ");
    scanf("%d", &n);
    a=malloc(n*sizeof(int));
    printf("\nEnter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("\nOriginal Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
    printf("\nEnter the data position you want to delete: ");
    scanf("%d", &x);
    a[x-1]=0;
    printf("\nModified Array:-\n");
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            printf("%d ", a[i]);
    }
}
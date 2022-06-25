#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,x,y;
    int *a;
    printf("\nEnter the array size: ");
    scanf("%d", &n);
    a=malloc((n+1)*sizeof(int));
    printf("\nEnter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("\nOriginal Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
    printf("\nEnter the position at which you want to enter the new data: ");
    scanf("%d", &x);
    printf("\nEnter the new data: ");
    scanf("%d", &y);
    for(int i=n-1;i>=x-1;i--){
        a[i+1]=a[i];
    }
    a[x-1]=y;
    printf("\nModified Array:-\n");
    for(int i=0;i<=n;i++)
        printf("%d ", a[i]);
}
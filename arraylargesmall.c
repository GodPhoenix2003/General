#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,x;
    int *a;
    printf("\nEnter the array size: ");
    scanf("%d", &n);
    a=malloc(n*sizeof(int));
    printf("\nEnter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("\nOriginal Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j])
                continue;
            else{
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    printf("\nSmallest Number in the array: %d\n", a[0]);
    printf("Largest number in the array: %d", a[n-1]);
}
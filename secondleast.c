//to print the 2nd least number from a given set of numbers, having duplicate numbers

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *x, *y, n, prv = 0;
    printf("\nEnter the number of numbers to be compared: ");
    scanf("%d", &n);
    x = malloc(n * sizeof(int));
    y = malloc(n * sizeof(int));
    for(int i = 0; i < n; i ++)
        y[i] = 0;
    printf("\nEnter the numbers to be compared:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &x[i]);
    for(int i = 0; i < n; i ++){
        for(int j = (i + 1); j < n; j ++){
            if(x[i] > x[j]){
                int tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
            else
                continue;
        }
    }
    for(int i = 0; i < n; i ++){
        if(prv != x[i]){
            y[i] = x[i];
            prv = x[i];
        }
        else
            continue;
    }
    int *z, size;
    for(int i = 0; i < n; i ++){
        if(y[i] != 0)
            size++;
        else
            continue;
    }
    z = malloc(size * sizeof(int));
    for(int i = 0, j = 0; i < n && j < size;){
        if(y[i] != 0){
            z[j] = y[i];
            i++;
            j++;
        }
        else
            i++;
    }
    printf("\n2nd least number is: %d\n", z[1]);
}
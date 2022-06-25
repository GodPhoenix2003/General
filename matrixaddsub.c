#include <stdio.h>
#include <stdlib.h>

void main(){
    int r1,r2,c1,c2,r,c;
    int a[100][100],b[100][100],sum[100][100],dif[100][100];
    printf("\nEnter the number of rows and columns, respectively, for the 1st matrix(A):\n");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter the number of rows and columns, respectively, for the 2nd matrix(B):\n");
    scanf("%d %d", &r2, &c2);
    if(r1==r2 && c1==c2){
        r=r1;
        c=c1;
        printf("\nEnter the matrix elements of A:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                scanf("%d", &a[i][j]);
        }
        printf("\nEnter the matrix elements of B:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                scanf("%d", &b[i][j]);
        }
        printf("\nOriginal Matrix A:-\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
        printf("\nOriginal Matrix B:-\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%d ", b[i][j]);
            printf("\n");
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                sum[i][j]=a[i][j]+b[i][j];
        }
        printf("\nSum:-\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%d ", sum[i][j]);
            printf("\n");
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                dif[i][j]=a[i][j]-b[i][j];
        }
        printf("\nDifference:-\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%d ", dif[i][j]);
            printf("\n");
        }
    }
}
#include <stdio.h>

void main(){
    int a[100][100],b[100][100],r,c;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++)
            a[i][j]=0;
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++)
            b[i][j]=0;
    }
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &r, &c);
    printf("Enter the matrix elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
            if(a[i][j]==0){
                printf("0 can't be an input. Please re-enter the data.");
                scanf("%d", &a[i][j]);
            }
        }
    }
    printf("Original Matrix:-\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=0)
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++)
            b[j][i]=a[i][j];
    }
    printf("Transposed Matrix:-\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(b[i][j]!=0)
                printf("%d ", b[i][j]);
        }            
        printf("\n");
    }
}
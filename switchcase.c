#include<stdio.h>

void add(float A, float B);
void multiply(float A, float B);
void subtract(float A, float B);
void divide(float A, float B);

void main(){
    float a,b;
    int c,opt;
    printf("Enter the 2 numbers:\n");
    scanf("%f %f", &a, &b);
    do{
        printf("Option 1: Add.\n");
        printf("Option 2: Subtract.\n");
        printf("Option 3: Multiply.\n");
        printf("Option 4: Devide.\n");
        printf("Enter your option number: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            add(a,b);
            break;
        case 2:
            subtract(a,b);
            break;
        case 3:
            multiply(a,b);
            break;
        case 4:
            divide(a,b);
            break;        
        default:
            printf("Wrong Input!\n");
            break;
        }
        printf("Do you want to execute the program again?-yes(1)/no(0): ");
        scanf("%d", &c);
    }while(c==1);
}

void add(float A, float B){
    printf("%d + %d = %f\n", (int)A, (int)B, A+B);
}

void multiply(float A, float B){
    printf("%d * %d = %f\n", (int)A, (int)B, A*B);
}

void subtract(float A, float B){
    if(A>B)
        printf("%d - %d = %f\n", (int)A, (int)B, A-B);
    else
        printf("%d - %d = %f\n", (int)B, (int)A, B-A);
}

void divide(float A, float B){
    printf("%d / %d = %f\n", (int)A, (int)B, A/B);
}
// Find the greatest among 3 numbers.
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the 3 numbers:\n");
    scanf("%d %d %d", &a,&b,&c);
    int max,min;
    if(a>b){
        if(a>c){
            max=a;
            if(b>c)
                min=c;
            else
                min=b;
        }
        else{max=c;
            min=b;
        }
    }
    else{
        if(b>c){
            max=b;
            if(a>c){
                min=c;
            }
            else
                min=a;
        }
        else{max=c;
            min=a;
        }
    }
    printf("Greatest:%d, Smallest:%d", max,min);
}

#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    printf("\nEnter your name: ");
    gets(name);
    char name2[100];
    strcpy(name2, name);
    printf("\n%s\n", name2);
    int y = strlen(name);
    printf("\nString length= %d\n", y);
    printf("\nEnter another string: ");
    char x[100];
    gets(x);
    printf("\n%d\n%d\n", strcmp(name, name2), strcmp(name, x));
    printf("\n%s\n", strrev(name));
}
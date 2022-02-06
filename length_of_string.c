#include <stdio.h>
int main()
{
    char c[100];
    int i;
    printf("Enter your string = ");
    scanf("%s",c);
    for (i = 0; c[i] != '\0'; ++i);
    printf("length of your string = %d",i);
    return 0;
}
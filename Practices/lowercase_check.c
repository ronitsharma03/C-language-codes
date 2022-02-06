#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    // logic used is the values of lowercase in ASCII Codes is 97-122
    
    if (ch >= 97 && ch <= 122)
    {
        printf("%c is a lowercase ! ", ch);
    }
    else
    {
        printf("%c is a uppercase ! ", ch);
    }
    return 0;
}
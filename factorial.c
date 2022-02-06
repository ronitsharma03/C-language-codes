#include <stdio.h>
int fact(no)
{
    int a;
    if (no == 1)
        return 1;
    else
        a = no*fact(no - 1);
        return a;
}
void main()
{
    int no;
    printf("enter the no.");
    scanf("%d", &no);
    printf("the factorial = %d",fact(no));
}
    

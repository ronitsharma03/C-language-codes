#include <stdio.h>
int main()
{
    int a=10;
    
    while (a >= 10 && a <= 20)
    {
        printf("%d\n", a++); //i++ ---> first print and then increment & ++i --> first increment and then print
    }

    return 0;
}
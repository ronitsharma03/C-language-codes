#include <stdio.h>
int main()
{
    int n, i = 0, sum = 0;
    printf("Enter the value of n = ");
    scanf("%d", &n);
    // for ( i = 0; i <= n; i++)
    // {
    //     sum+=i;

    // } ------>  code to get sum of first n natural number by using for loop

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of first %d natural no. is = %d ", n, sum);
    return 0;
}
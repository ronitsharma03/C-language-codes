#include <stdio.h>
int main()
{
    int n, sum = 0, i = 0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The sum of %d natural numbers is = %d\n", n, sum);

    return 0;
}
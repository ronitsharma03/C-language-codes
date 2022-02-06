#include <stdio.h>
int sum(int a,int b);
int main()
{
    int result;
    result = sum(15, 11);
    printf("Result is %d\n",result);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
#include <stdio.h>
int main()
{
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;

    printf("enter m1 = ");
    scanf("%d", &m1);
    printf("enter m2 = ");
    scanf("%d", &m2);
    printf("enter m3 = ");
    scanf("%d", &m3);
    printf("enter m4 = ");
    scanf("%d", &m4);
    printf("enter m5 = ");
    scanf("%d", &m5);
    int avg;
    avg = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("average = %d", avg);

    return 0;
}
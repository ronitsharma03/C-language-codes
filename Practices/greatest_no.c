#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter the num1 = ");
    scanf("%d", &num1);
    printf("Enter the num2 = ");
    scanf("%d", &num2);
    printf("Enter the num3 = ");
    scanf("%d", &num3);
    printf("Enter the num4 = ");
    scanf("%d", &num4);
    if (num1 > num2 && num2>num3 && num3>num4)
    {
        printf("%d is greatest ", num1);
        
    }
    
    if (num2 > num3 && num2 > num4 && num2>num1)
    {
            printf("%d", num2);
    }
    if (num3 > num4 && num3>num2 && num3>num1)
    {
        printf("%d", num3);
    }else
    {
        printf("%d is greatest",num4);
    }

    return 0;
}
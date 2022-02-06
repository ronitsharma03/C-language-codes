#include <stdio.h>
int main()
{
    float side1, side2, side3;
    int r;
    do
    {
        printf("Enter the first side = ");
        scanf("%f", &side1);
        printf("Enter the second side = ");
        scanf("%f", &side2);
        printf("Enter the third side = ");
        scanf("%f", &side3);
        if (side1 == side2 && side2 == side3)
        {
            printf("Triangle is equilateral");
        }
        else if (side1 == side2 && side2 != side3 || side2 == side3 && side3 != side1 || side3 == side1 && side2 != side3)
        {
            printf("Triangle is isosceles");
        }
        else if (side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 * side1 || side3 * side3 + side1 * side1 == side2 * side2)
        {
            printf("Triangle is a right - angled triangle");
        }
        else
        {
            printf("Triangle is scalar");
        }

        printf("\n Do you want to Check again with another values, \nTo check enter 5 = ");
        scanf("%d", &r);
    } while (r == 5);

    if (r == 5)
        ;
    {
        printf("\nWrong input, please choose valid input\n");
    }
     return 0;
}
#include<stdio.h>
int main(){
    int num,remainder,reverse=0,r;
    printf("Enter your number = ");
    scanf("%d",&num);
    r = num;
    while (num>0)
    {
        remainder = num%10;
        reverse = reverse * 10 + remainder;
        num = num/10;
    }

        printf("reversed number = %d",reverse);
        if (r == reverse)
        {
            printf("Yes, enterd no. is palidrome");

        }
        else{
            printf("No, the enterd no is not palidrome");
        }




    return 0;
}
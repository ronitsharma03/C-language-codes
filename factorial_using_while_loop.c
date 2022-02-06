#include<stdio.h>
int main(){
    int n,factorial=1,i=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while (i<=n)
    {
        factorial*=i;
        i++;
    }
    printf("Factorial of %d is %d",n,factorial);


    return 0;
}
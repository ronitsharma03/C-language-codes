#include<stdio.h>
int main(){
    int a,i = 1,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(a = 1;a<=n;a++)
    {
        i*=a;
    }
    printf("Factorial of given number is : %d",i);

return 0;
}
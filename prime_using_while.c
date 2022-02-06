#include<stdio.h>
int main(){
    int a,prime = 1,b = 2;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(b<a)
    {
        b++;
        if (a%b==0)
        {
            prime = 0;
            break;

        }
        
    }
    if (prime == 0)
    {
        printf("%d is not prime ",a);

    }
    else
    {
        printf("%d is prime",a);
    }
    
return 0;
}
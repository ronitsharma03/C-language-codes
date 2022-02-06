#include <stdio.h>
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d",a);
    printf("\n%d",b);
}
void main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
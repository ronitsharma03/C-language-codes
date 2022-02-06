#include<stdio.h>
int main (){
int a,b,c,e;
do
{ 
    printf("enter the first side");
    scanf("%d",&a);
    printf("enter 2nd side");
    scanf("%d",&b);
    printf("enter the 3rd side");
    scanf("%d",&c);
    if (a==b&&b!=c||b==c&&c!=a||a==c&&b!=c)
    {
        printf("a isosceles triangle");
    }
    else
    {
        printf("not a isosceles triangle");
    }
    
    
     printf("\nDo you want to check again");
     scanf("%d",&e);

}while (e==0);
return 0;
}
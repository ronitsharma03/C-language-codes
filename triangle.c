#include<stdio.h>
int main(){
    int a,b,c,i;
do
{ printf("ist side");
    scanf("%d",&a);
    printf("2nd side");
    scanf("%d",&b);
    printf("3rd side");
    scanf("%d",&c);
    if (a==b&&a!=c||b==c&&c!=a||c==a&&b!=c)
   { 
     printf("a isosceles triangle");       
    }
     else
     {
      printf("not isosceles");
      }
 printf("\nDo you want to check again?");
 scanf("%d",&i);
}while (i==0);
return 0;
}
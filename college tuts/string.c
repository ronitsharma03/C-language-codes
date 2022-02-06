#include<stdio.h>
int main (){
   char a[100];
   int i=0,j=0;
   char b[100];
   printf ("Enter the string : ");
   gets(a);
   printf("You entered : %s\n",a);
   while (a[i]!='\0')
   {
       i++;
   } 
       printf("length of entered string : %d\n",i);
     for ( j = 0; i > 0; j++)
        {
            i--;
            b[j] = a[i];
        }
        b[j] = '\0';
        printf("Reversed string : %s\n",b);
       
   return 0;
}
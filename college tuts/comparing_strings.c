#include<stdio.h>
#include<string.h>
int main(){
    int j,i,flag=0;
    char a[10]="abcd", b[10]="abcd";
    if (strlen(a)!=strlen(b))
    {
        printf("Not matching");
    }
    else{
         for ( i = 0; a[i]!='\0'; i++)
            {
                 if (a[10]==b[10]){
        
                continue;
            }
              else{
                flag=1;
                break;
             }
        
        }if (flag==0)
    {
        
    }
    else
        printf("strings  matching\n");
    }


   
    
    
return 0;
}
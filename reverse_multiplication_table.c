#include<stdio.h>
int main(){
    int num;
  
        printf("Enter the number for table = ");
        scanf("%d",&num);
    for (int var = 10; var; var--)
    {
        printf("%d X %d = %d\n",num,var,num*var);
        
    }
    
    return 0;
}
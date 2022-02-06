#include<stdio.h>
int main(){
    int a,var;
    printf("Enter the number : ");
    scanf("%d",&a);

    for(var = 1;var<=10;var++)
    {
        printf("%d X %d = %d\t",a,var,a*var);
    }
    printf("\n");
return 0;
}
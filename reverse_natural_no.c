#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the velue of n : ");
    scanf("%d",&n);
    for(a=n; a; a--)
    {
        printf("%d",a);
        printf("\n");
    }

    return 0;
}
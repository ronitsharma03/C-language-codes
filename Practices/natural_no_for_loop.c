#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int a=0; a<=n; a++)
    {
        printf("%d",a);
        printf("\n");
    }
    return 0;
}
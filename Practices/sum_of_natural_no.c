#include<stdio.h>
int main(){
    int a=0;
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    do{
        printf("%d\n",a);
        a++;
    }while(a<=n);

    return 0;
}
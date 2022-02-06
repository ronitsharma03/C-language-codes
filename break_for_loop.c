#include<stdio.h>
int main(){
    int a=0,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    do{
        printf("%d",a);
        printf("\n");
        a++;
        if(a==15){
            break;
        }
    }while(a<=20);

    return 0;
}
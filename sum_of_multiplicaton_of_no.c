#include<stdio.h>
int main(){
    int num, var = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    do
    {
        printf("%d + %d = %d\n", num, var, num + var);
        var++;
    } while (var <= 10);

return 0;
}
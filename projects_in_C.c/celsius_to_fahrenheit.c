#include<stdio.h>
float convert(int a);
int main(){
    int a;
    printf("Enter the value of temperature in celsius : ");
    scanf("%d",&a);
    printf("The value of temperature in Fahrenheit is %f\n",convert(a));
return 0;
}
float convert(int a){
    float convert;
    convert = (a*9/5) + 32;
    return convert;
}
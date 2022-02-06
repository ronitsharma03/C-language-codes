#include<stdio.h>
int area(int a);

int main(){
    int result;
    result = area(5);
    printf("The area of required square is %d\n",result);
return 0;
}
int area(int a){
    int area;
    area = a*a;
    return area;
}
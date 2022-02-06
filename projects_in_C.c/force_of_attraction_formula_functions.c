#include <stdio.h>
float force(float mass);
int main()
{
    int mass;
    printf("Enter the mass of the object in kgs : ");
    scanf("%d", &mass);
    printf("The force of attraction between earth and the object is %.2f Newton\n", force(mass));
    return 0;
}
float force(float mass)
{
    float force;
    force = mass * 9.8;
    return force;
}
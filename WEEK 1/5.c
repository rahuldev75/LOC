#include<stdio.h>
void main(){
    float r= 0;

    printf("enter the radius of a circle");
    scanf("%f", &r);

    float dia = 2*r;
    float cir = 2*3.14*r;
    float are = 3.14*r*r;

    printf("Diametre of the circle is : %f\n", dia);
    printf("Circumference of the circle is :%f\n", cir);
    printf("Area of the circle is : %f\n", are);

}
#include<stdio.h>
void main(){
    float a=0;
    float b=0;
    printf("enter two numbers!!\n");
    scanf("%f", &a);
    scanf("%f", &b);


    float sum = a+b;
    float diff = a-b;
    float div = a/b;
    float mult = a*b;


    int x=1;
    switch(x){
        case 1 :
        printf("The sum of the numbers is %f\n", sum);
        case 2 :
        printf("The difference of the numbers is %f\n", diff);
        case 3 :
        printf("The division of the numbers is %f\n", div);
        case 4 :
        printf("The multiplication of the numbers is %f\n", mult);

    }


}

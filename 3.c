#include <stdio.h>
int main(){
    int i=0;
    printf("enter a number");
    scanf("%d",&i);
    int sum = 0;
    int x = 0;
    do{
    x = i%10;
    sum = sum + x;
    i = i/10;
    }
    while(i>0);
    printf("Sum of the digits of the number is %d",sum);
    
}
#include<stdio.h>
 int main(){
    float a,b,c,d;
    printf("ENTER GROSS SALARY:");
    scanf("%f",&a);
    b = a/10;
    c = 3*a/100;
    d = a - b - c;
    printf("%f (gross salary) - %f (allowance) - %f (deduction) = %f (net salary)",a,b,c,d);
    
 }
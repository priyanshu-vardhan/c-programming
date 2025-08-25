#include<stdio.h>
int main (){
    float a,b,c,d;
    printf("Enter Principal amount:\n");
    scanf("%f", &a);
    printf("Enter rate of interest:\n");
    scanf("%f", &b);
    printf("Enter the time:\n");
    scanf("%f", &c);
    d = (a*b*c)/100;
    printf("%f*%f*%f / 100 = %f",a,b,c,d);
    
}
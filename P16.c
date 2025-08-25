#include<stdio.h>
int main(){
    float a,b,c;
    printf("ENTER NUMBER OF FAHRENHEIT:");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("%f FAHRENHEIT= %f CELCIUS",a,b);
    
}
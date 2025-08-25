#include<stdio.h>
int main(){
    float a,b,c;
    printf("ENTER NUMBER OF CELCIUS:");
    scanf("%f",&a);
    b=1.8*a +32;
    printf("%f CELCIUS = %f FAHRENHEIT",a,b);
    return 0;
}
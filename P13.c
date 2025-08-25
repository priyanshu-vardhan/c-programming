#include<stdio.h>
int main(){
    float a,b;
    printf("ENTER NUMBER OF KG:");
    scanf("%f",&a);
    b=a*1000;
    printf("%f KG = %f GRAMS",a,b);
    return 0;
}
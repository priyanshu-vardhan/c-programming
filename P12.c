#include<stdio.h>
int main(){
    float a,b;
    printf("ENTER NUMBER OF GRAMS:");
    scanf("%f",&a);
    b=a/1000;
    printf("%f GRAMS = %f KG",a,b);
    return 0;
}
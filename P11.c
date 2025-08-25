#include<stdio.h>
int main(){
    float a,b,c;
    printf("ENTER NUMBER OF DOLLAR:");
    scanf("%f",&a);
    b=a*48;
    c=b/70;
    printf("%f DOLLAR = %f POUND",a,c);
    return 0;
}
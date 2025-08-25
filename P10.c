#include<stdio.h>
int main(){
    float a,b;
    printf("ENTER NUMBER OF RUPEES:");
    scanf("%f",&a);
    b=a/48;
    printf("%f RUPEES/48 = %f DOLLAR",a,b);
    return 0;
}
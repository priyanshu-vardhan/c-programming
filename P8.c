#include<stdio.h>
int main(){
    float a,b;
    printf("ENTER NUMBER OF MINUTES:");
    scanf("%f",&a);
    b=a/60;
    printf("%f MINUTES /60 = %f HOUR",a,b);
    return 0;
}
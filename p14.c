#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("ENTER NUMBER OF BYTES:");
    scanf("%f",&a);
    b=a/1024;
    c=b/1024;
    d=c/1024;
    printf("%f BYTES = %f KB\n",a,b);
    printf("%f BYTES = %f MB\n",a,c);
    printf("%f BYTES = %f GB\n",a,d);
    return 0;
}


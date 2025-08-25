int main(){
    float a,b,c;
    printf("ENTER THE VALUE OF A:");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF B:");
    scanf("%f",&b);
    c = a;
    a = b;
    b = c;
    printf("AFTER SWAPPING:\nVALUE OF A =%f\nVALUE OF B =%f\n",a,b);
    return 0;
 }
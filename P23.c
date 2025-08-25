int main(){
    float a,b,c;
    printf("ENTER GROSS SALES:");
    scanf("%f",&a);
    b = a/10;
    c = a - b;
    printf("%f (gross sales) - %f (discount) = %f (net sales)",a,b,c);
    
 }
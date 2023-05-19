#include <stdio.h>
#include <math.h>


int main()
{
    int a,b,c;
    float delta;
    float x1,x2;
    
    printf("Denklemin a'sını Giriniz:\n");
    scanf("%d",&a);
    printf("Denklemin b'sını Giriniz:\n");
    scanf("%d",&b);
    printf("Denklemin c'sını Giriniz:\n");
    scanf("%d",&c);
    
    delta = b*b -4*a*c;
    x1 = (-b + (sqrt(delta)))/2*a;
    x2 = (-b - (sqrt(delta)))/2*a;
    
    printf("Denklemin 1. kökü %2.f,\n2. kökü %2.f\n",x1,x2);
    return 0;
}

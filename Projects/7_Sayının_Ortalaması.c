#include <stdio.h>

int main()
{
    int x,y,z,d,e,f,h;
    int ortalama;
    
    printf("Lütfen 7 Tane Sayı Giriniz:\n");
    scanf("%d %d %d %d %d %d %d",&x,&y,&z,&d,&e,&f,&h);
    
    ortalama = (x+y+z+d+e+f+h)/7;
    printf("Girdiğiniz Yedi Sayının Ortalaması %d \n",ortalama);
    
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a,b,c,d,e;
    int *x = &a;
    int *y = &b;
    int *z = &c;
    int *w = &d;
    int *q = &e;
    
    printf("Lütfen adres bilgisini görmek istediğiniz 5 sayıyı Giriniz:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    printf("Girdiğiniz 5 Sayı Ve Adres Bilgileri =\n\nBirinci Sayı: %d   Adres Bilgisi: %p\nİkinci Sayı: %d   Adres Bilgisi: %p\nÜçüncü Sayı: %d   Adres Bilgisi: %p\nDördüncü Sayı: %d   Adres Bilgisi: %p\nBeşinci Sayı: %d   Adres Bilgisi: %p\n\n",*x,x,*y,y,*z,z,*w,w,*q,q);
   
    
    return 0;
}




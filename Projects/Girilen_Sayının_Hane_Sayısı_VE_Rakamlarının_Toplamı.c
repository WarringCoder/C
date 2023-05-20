#include <stdio.h>

int main()
{
    int x;
    int toplam = 0;
    int hane = 0;
    
    printf("Herhangi Bir Sayı Giriniz:");
    scanf("%d",&x);
    
    do
    {
        toplam += (x % 10);
        hane++;
        x = x / 10;
    }
    while (x != 0);
    printf("Rakamların Toplamı %d\nHane Sayısı %d\n",toplam,hane);
    
    return 0;
}





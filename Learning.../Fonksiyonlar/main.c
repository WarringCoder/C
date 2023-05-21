#include <stdio.h>
#include <stdbool.h>


//Dış Dünya İle İletişime Geçerek Fonksiyon Yazma
int topla(int sayi1, int sayı2, int sayı3)
{
    return (sayi1 + sayı2 + sayı3);
}



int main()
{
    
    
    //Dış Dünya İle İletişime Geçerek Fonksiyon Yazma
    int sayi1;
    int sayı2;
    int sayı3;
    int toplam;
    
    printf("Lütfen 3 Tane Sayı Giriniz:\n");
    scanf("%d %d %d",&sayi1,&sayı2,&sayı3);
    
    toplam = topla(sayi1, sayı2, sayı3);
    
    printf("Girdiğiniz sayıların toplamı %d\n",toplam);
    return 0;
}




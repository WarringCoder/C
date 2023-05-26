#include <stdio.h>
#include <string.h>

struct Puanlama
{
    float Puan;
    int begeni;
    int Okuyacaklar;
    int İnceleme;
};
struct Kitap_Bilgileri
{
    char ismi[21];
    char yazar[21];
    char tür[21];
    
    int sayfa;
    int fiyat;
    
    struct Puanlama Kullanıcı_Analizi;
};


int main()
{
    struct Kitap_Bilgileri Mutlak_Peşinde;
    
    strcpy(Mutlak_Peşinde.ismi,"Mutlak Peşinde");
    strcpy(Mutlak_Peşinde.yazar,"Honore de Balzac");
    strcpy(Mutlak_Peşinde.tür,"Roman");
    Mutlak_Peşinde.sayfa = 210;
    Mutlak_Peşinde.fiyat = 25;
    Mutlak_Peşinde.Kullanıcı_Analizi.Puan = 9.0;
    Mutlak_Peşinde.Kullanıcı_Analizi.begeni = 42222;
    Mutlak_Peşinde.Kullanıcı_Analizi.Okuyacaklar = 1000;
    Mutlak_Peşinde.Kullanıcı_Analizi.İnceleme = 899;
    
    printf("%s  %s  %s  Sayfa:%d  Fiyat:%d   Puan:%.1f  Begeni:%d  Okuyacaklar:%d  İnceleme:%d\n",Mutlak_Peşinde.ismi,Mutlak_Peşinde.yazar,Mutlak_Peşinde.tür,Mutlak_Peşinde.sayfa,Mutlak_Peşinde.fiyat,Mutlak_Peşinde.Kullanıcı_Analizi.Puan,Mutlak_Peşinde.Kullanıcı_Analizi.begeni,Mutlak_Peşinde.Kullanıcı_Analizi.Okuyacaklar,Mutlak_Peşinde.Kullanıcı_Analizi.İnceleme);
    
    return 0;
}




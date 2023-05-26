#include <stdio.h>
#include <string.h>
struct Kitap_Bilgileri
{
    char ismi[21];
    char yazar[21];
    char tür[21];
    
    int sayfa;
    int fiyat;
};

int main()
{
    struct Kitap_Bilgileri Mutlak_Peşinde = {"Mutlak Peşinde","BALZAC","Roman",210,25};
    
    printf("%s  %s  %s  Sayfa:%d  Fiyat:%d\n",Mutlak_Peşinde.ismi,Mutlak_Peşinde.yazar,Mutlak_Peşinde.tür,Mutlak_Peşinde.sayfa,Mutlak_Peşinde.fiyat);
    
    return 0;
}




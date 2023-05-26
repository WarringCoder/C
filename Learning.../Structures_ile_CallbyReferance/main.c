#include <stdio.h>
#include <string.h>
struct Şehir_Bul
{
    char Şehir_İsmi[20];
    int Plaka;
    int Nüfus;
};
void değiştir(struct Şehir_Bul *dğşm)
{
    strcpy(dğşm->Şehir_İsmi,"İSTANBUL");
    dğşm->Plaka = 34;
    dğşm->Nüfus = 15000000;
}



int main()
{
    struct Şehir_Bul seç = {"Konya",42,2555000};
    değiştir(&seç);
    
    printf("%s %d %d\n",seç.Şehir_İsmi,seç.Plaka,seç.Nüfus);
    
    return 0;
}




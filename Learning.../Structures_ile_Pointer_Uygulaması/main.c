#include <stdio.h>
#include <string.h>
struct Ağaç_Yurdu
{
    char Ağaç_İsmi[20];
    int Adet;
    int Çit_İçin_Alan_Ölçüsü;
};



int main()
{
    struct Ağaç_Yurdu *KUR;
    struct Ağaç_Yurdu kur;
   
    
    strcpy(kur.Ağaç_İsmi,"Meşe");
    kur.Adet = 40;
    kur.Çit_İçin_Alan_Ölçüsü = 888;
    
    KUR = &kur;
    
    printf("Ağaç: %s   Adet: %d   Alan: %dM2\n",KUR->Ağaç_İsmi,KUR->Adet,KUR->Çit_İçin_Alan_Ölçüsü);
    
    
    return 0;
}




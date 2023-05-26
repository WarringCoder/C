#include <stdio.h>
#include <string.h>
struct Bilgisayar
{
    char Bilgisayar_İsmi[21];
    int Model;
    char Renk[23];
};

int main()
{
    struct Bilgisayar Satın_Al[3];
    int i;
    
    for (i=0; i<3; i++)
    {
        printf("Satın Almak İstediğiniz %d. Bilgisayarı Giriniz:\n",i+1);
        scanf("%s %d %s,",Satın_Al[i].Bilgisayar_İsmi,&Satın_Al[i].Model,Satın_Al[i].Renk);
    }
    for (i=0; i<3; i++)
    {
        printf("Satın Almak İstediğiniz %d. Bilgisayar %s %d %s\n",i+1,Satın_Al[i].Bilgisayar_İsmi,Satın_Al[i].Model,Satın_Al[i].Renk);
    }
    
    
   
    
    return 0;
}




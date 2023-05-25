#include <stdio.h>
#include <string.h>
struct Football_Player
{
    char isim[13];
    char soyad[13];
    char mevki[17];
    char takim[17];
    
    int yaş;
    int değer;
    int bu_sezon_gol;
    int bu_sezon_asist;
};
int main()
{
    struct Football_Player İcardi = {"MARİO","İCARDİ","Forvet","GALATASARAY",30,25,19,8};
    
    printf("%s %s  Mevki:%s  Takım:%s  Yaş:%d  Değer:%d Milyon EURO   Gol:%d Asist:%d\n",İcardi.isim,İcardi.soyad,İcardi.mevki,İcardi.takim,İcardi.yaş,İcardi.değer,İcardi.bu_sezon_gol,İcardi.bu_sezon_asist);
    
    return 0;
}




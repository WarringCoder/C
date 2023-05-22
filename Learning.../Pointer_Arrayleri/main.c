#include <stdio.h>
#include <string.h>
char *fgünler(char *p[],int uzunluk,char seçilengün)
{
    if (seçilengün>uzunluk)
    {
        return NULL;
    }
    else
    {
        return p[seçilengün-1];
    }
}
   
int main()
{
    char *günler [7] = {"Pazartesi","Salı","Çarşamba","Perşembe","Cuma","Cumartesi","Pazar"};
    char *p = fgünler(günler,7,5);
    
    if (p == NULL)
    {
        printf("Dünya'da Böyle Bir Gün Yoktur\n");
    }
    else
    {
        printf("%s\n",p);
    }
    return 0;
}




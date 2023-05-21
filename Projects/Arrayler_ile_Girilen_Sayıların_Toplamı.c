#include <stdio.h>
#include <stdbool.h>

int main()
{
    int sayılar [7];
    int toplam =0;
    int a;
    
    for (a=0; a<7; a++)
    {
        printf("Lütfen Bir Sayı Giriniz:");
        scanf("%d",&sayılar[a]);
    }
    for (a=0; a<7; a++)
    {
        toplam += sayılar[a];
        
    }
    printf("Girdiğiniz Sayıların Toplamı %d\n",toplam);
    
    return 0;
}






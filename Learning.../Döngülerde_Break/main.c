#include <stdio.h>
#include <stdbool.h>

int main()
{
    int toplam = 0;
    int s;
    int sayı;
    
    for (s = 0; true ; s++)
    {
        printf("Bir Sayı Giriniz: (Toplamak İçin -1 'e tıklayın):");
        scanf("%d",&sayı);
        
        if (sayı == -1)
        {
            break;
        }
        toplam += sayı;
    }
    printf("Girdiğiniz Sayıların Toplamı %d\n",toplam);
    
    return 0;
}






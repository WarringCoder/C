#include <stdio.h>
#include <stdbool.h>
int asal_mı(int sayı)
{
    int x;
    
    for (x=2; x<sayı; x++)
    {
        if (sayı % x == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int sayı;
    
    printf("Lütfen Bir Sayı Giriniz:");
    scanf("%d",&sayı);
    
    if (asal_mı(sayı) == 0)
    {
        printf("Bu Sayı ASAL Değil!\n");
    }
    else
    {
        printf("Tebrikler! Bu Sayı ASAL Bir Sayı\n");
    }
  
    return 0;
}




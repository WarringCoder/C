#include <stdio.h>
#include <stdbool.h>
int factöriyel(int sayı)
{
    int fact=1;
    for (; sayı>0; sayı--)
    {
        fact *= sayı;
    }
    return fact;
}

int main()
{
    int sayı;
    
    printf("Lütfen Faktöriyelini İstediğiniz Sayıyı Giriniz:");
    scanf("%d",&sayı);
    
    printf("Faktöriyeli= %d\n",factöriyel(sayı));
  
    return 0;
}




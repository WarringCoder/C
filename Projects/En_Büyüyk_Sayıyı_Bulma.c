#include <stdio.h>
#include <stdbool.h>
int max(int *a, int uzunluk)
{
    int maks = a[0];
    int y;
    
    for (y=1; y<uzunluk; y++)
    {
         if (maks<a[y])
         {
             maks = a[y];
         }
    }
    return maks;
}

int main()
{
    int sayılar[10]={23,44,10,3,76,56,98,212,571,45};
    int sonuç = max(sayılar,10);
    
    printf("En Büyük Sayı %d\n",sonuç);
    
    
    return 0;
}




#include <stdio.h>

int main()
{
    int ilk_Sayı = 1;
    int İkinci_Sayı = 1;
    int x;
    
    printf("%d\n%d\n",ilk_Sayı,İkinci_Sayı);
    
    for (x = 0; x<7; x++)
    {
        int temp = İkinci_Sayı;
        İkinci_Sayı += ilk_Sayı;
        ilk_Sayı = temp;
        
        printf("%d\n",İkinci_Sayı);
    }
    
    
    
    return 0;
}






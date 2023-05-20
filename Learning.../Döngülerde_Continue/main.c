#include <stdio.h>
#include <stdbool.h>

int main()
{
    int toplam = 0;
    int i;
    
    for (i = 0; i <= 100 ; i++)
    {
        if (i % 2 ==1)
        {
            continue;;
        }
        toplam += i;
    }
    printf("%d\n",toplam);
    
    return 0;
}






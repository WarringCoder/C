#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int Matris [3][3];
    int x;
    int y;
    int sum = 0;
    
    printf("Lütfen 9 Tane Sayı Giriniz:\n");
    for (x=0; x<3; x++)
    {
        for (y=0; y<3; y++)
        {
            scanf("%d",&Matris[x][y]);
        }
    }
    for (y=0; y<3; y++)
    {
        for (x=0; x<3; x++)
        {
            sum += Matris[x][y];
        }
        printf("%d ",sum);
        
        sum = 0;
    }
    
    
    
    return 0;
}






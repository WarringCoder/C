#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Çok Boyutlu Dizileri Matris İle Anlayalım
    int matris [7][7] = {{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30},{31,32,33,34,35,36,37},{38,39,40,41,42,43,44},{45,46,47,48,49,50,51},{52,53,54,55,56,57,58}};
    int a;
    int b;
    
    for (a=0; a<7; a++)
    {
        for (b=0; b<7; b++)
        {
            printf("%d ",matris[a][b]);
        }
        printf("\n");
    }
    
    //Çok Boyutlu Dizilerde Kulanıcının Girdiği Bilgileri Matrise Çevirme
    int Matris [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int x;
    int y;
    
    printf("Lütfen 9 Tane Sayı Giriniz:\n");
    for (x=0; x<3; x++)
    {
        for (y=0; y<3; y++)
        {
            scanf("%d",&Matris[x][y]);
        }
    }
    for (x=0; x<3; x++)
    {
        for (y=0; y<3; y++)
        {
            printf("%d ",Matris[x][y]);
        }
        printf("\n");
    }
    
    
    return 0;
}






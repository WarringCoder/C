#include <stdio.h>
#include <stdbool.h>

int main()
{
    int Arr_Point[4] = {1,2,3,4};
    int *dnm =Arr_Point;  //Bunu Normalde *Arr_Point şeklinde yapmamız lazımdı ama Arraylerde * koymadan adres bilgisini                                gönderiyoruz. Ve biz burada başilangıç konumunu gönderdik.
    
    printf("%d\n",dnm[0]);
    printf("%d\n",dnm[1]);
    printf("%d\n",dnm[2]);
    printf("%d\n",dnm[3]);
    
    return 0;
}




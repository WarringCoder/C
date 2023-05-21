#include <stdio.h>
#include <stdbool.h>
int çarp(int matris[],int size)
{
    int a;
    int çarpım=1;
    
    for (a=0; a<size; a++)
    {
        çarpım *= matris[a];
    }
    return çarpım;
}

int main()
{
    int sayılar[5] = {3,5,7,9,1};
    
    printf("Matris Sayılarının Çarpımı %d\n",çarp(sayılar,5));
    
    return 0;
}




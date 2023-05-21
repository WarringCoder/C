#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Girilen Kelimenin Bir Harfini Çağırma
    char isim [] = "Ishak";
    printf("%c\n\n",isim[2]);
    
    //Arrayler ile kelime Alma
    char name [23];
    
    printf("İsminizi Giriniz:");
    scanf("%s",name);
    
    printf("İsmin = %s\n",name);
    
    return 0;
}






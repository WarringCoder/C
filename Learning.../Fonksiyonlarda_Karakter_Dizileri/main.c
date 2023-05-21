#include <stdio.h>
#include <stdbool.h>
int uzunlukdön(char name[])
{
    int uzunluk=0;
    int a;
    
    for (a=0; name[a] != '\0'; a++)
    {
        uzunluk++;
    }
    return uzunluk;
}

int main()
{
    char isim[] = "ISHAK";
    
    printf("%d\n",uzunlukdön(isim));
   
    return 0;
}




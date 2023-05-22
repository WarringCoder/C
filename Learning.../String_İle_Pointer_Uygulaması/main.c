#include <stdio.h>
#include <stdbool.h>
int benimsterlen(char *p)
{
    int uzunluk=0;
    int x;
    
    for (x=0; p[x]; x++)
    {
        uzunluk++;
        
    }
    return uzunluk;
}


   
int main()
{
    char dnm[] ="GALATASARAY";
    
    printf("%d\n",benimsterlen(dnm));
    
    return 0;
}




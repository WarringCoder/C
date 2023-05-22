#include <stdio.h>
#include <string.h>
char *döndür(char *p,int indeks)
{
    int uzunluk = (int)strlen(p);
    
    if (indeks > uzunluk)
    {
        return NULL;
    }
    else
    {
        return p+indeks;
    }
}

   
int main()
{
    char dizi[] = "yazılım";
    char *p = döndür(dizi,10);
    
    if (p == NULL)
    {
        printf("Pointer NULL!\n");
    }
    else
    {
        printf("%s\n",p);
    }
    return 0;
}




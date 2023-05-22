#include <stdio.h>

int main()
{
    int a;
    int fact =1;
    
    printf("Lütfen Faktöriyelini İstediğiniz Sayıyı Giriniz:");
    scanf("%d",&a);
    
    while (a != 0)
    {
        fact = fact * a;
        a--;
        printf("%d\n",a);
        
        
    }
    printf("%d\n",fact);
    
    return 0;
}




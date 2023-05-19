#include <stdio.h>
#define  PI  3.14

int main()
{
    int yariçap;
    float hacim;
    
    printf("Lütfen Kürenin Hacmini Giriniz:");
    scanf("%d",&yariçap);
    
    hacim = (4/3.0)*PI*(yariçap*yariçap*yariçap);
    printf("Kürenin Hacmi: %.2f'dir\n",hacim);
    
    return 0;
}

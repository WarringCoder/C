#include <stdio.h>

int main()
{
    int note1, note2;
    int ort;
    
    printf("Dersinizin ilk notunu giriniz:\n");
    scanf("%d",&note1);
    printf("Dersinizin ikinci notunu giriniz:\n");
    scanf("%d",&note2);
    
    ort = (note1+note2) /2;
    
    if (ort > 50)
    {
        printf("TEBRİKLER Dersten Geçtiniz. Ortalamanız %d\n",ort);
    }
    else
    {
        printf("ÜZGÜNÜM Dersten Kaldınız Ortalamanız %d\n",ort);
    }
    
    return 0;
}

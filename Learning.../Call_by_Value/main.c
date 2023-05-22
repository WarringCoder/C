#include <stdio.h>
#include <stdbool.h>
void callbyvalue(int a,int b)
{
    int Geçici = a;
    a=b;
    b=Geçici;
    
    printf("a:%d b:%d\n",a,b);
    
}


int main()
{
    int x = 21;
    int y = 13;
    
    callbyvalue(x,y);
    
    printf("x:%d y:%d\n",x,y);
    
    
    return 0;
}




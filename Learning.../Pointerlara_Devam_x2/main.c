#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a=3,b,c=1;
    int *xp,*yp,*zp;
    xp = &a;
    zp =&c;
    
    yp = xp;
    
    b = ++(*xp);
    
    *xp = *yp + b + *zp;
    
    *zp += *zp;
    
    printf("a:%d  b:%d  c:%d  xp:%d  yp:%d  zp:%d\n",a,b,c,*xp,*yp,*zp);
    
    
    return 0;
}




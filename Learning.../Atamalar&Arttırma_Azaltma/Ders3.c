#include <stdio.h>

int main()
{
    int x=10;
    int y=21;
    int z=2;
    
    x = z;
    z = x*y+1;
    
    printf("x:%d\ny:%d\nz:%d\n",x,y,z);
    
    x = 10;
    y = 42;
    z = 21;
    
    printf(" x:%d\n y:%d\n z:%d\n",++x,--y,z++);
    
    x += y-z;
    
    printf("x:%d\ny:%d\nz:%d\n",x,y,z);
    
    return 0;
}

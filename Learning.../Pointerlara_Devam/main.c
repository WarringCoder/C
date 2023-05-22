#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a=3, *ap;
    int b=6, *bp;
    int c=9, *cp;
    float d=10.1, *dp;
    char e='H', *ep;
    
    ap = &a;
    bp = &b;
    cp = &c;
    dp = &d;
    ep = &e;
    
    printf("%p  adresindeki sayının değeri: %d\n",ap,*ap);
    printf("%p  adresindeki sayının değeri: %d\n",bp,*bp);
    printf("%p  adresindeki sayının değeri: %d\n",cp,*cp);
    printf("%p  adresindeki sayının değeri: %f\n",dp,*dp);
    printf("%p  adresindeki harf: %c\n",ep,*ep);
    
    return 0;
}




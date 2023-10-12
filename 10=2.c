#include <math.h>
#include <stdio.h>

unsigned long long int bin(int x, unsigned long long int y)
{
    int i = 0;
    do 
    {
        if (x%2 == 1)
        {
            y+= 1 * pow(10, i);
           
        } 
        x = trunc(x/2);
        i++;
    }
    while(x > 0);
    return y;
}
unsigned long long int interface(int ix, unsigned long long int iy)
{
    printf("Vvedite chislo:\n");
    scanf("%d", &ix);
    if (ix < 0)
    {
        ix = fabs(ix);
    }
    printf("Dvoichniy vid(po modulu): %llu\n\n", bin(ix, iy));
    ix = 0;
    iy = 0;
    return interface(ix, iy);
}
int main()
{
    int prinimaemoe = 0;
    unsigned long long int perevedennoe = 0;
    interface(prinimaemoe, perevedennoe);
}

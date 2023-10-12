#include <math.h>
#include <stdio.h>
int bin(int x, int y)
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

int interface(ix, iy)
{
    printf("\nVvedite chislo:\n");
    scanf("%d", &ix);
    printf("\nDvoichniy vid: %d", bin(ix, iy));
    ix = 0;
    iy = 0;
    return interface(ix, iy);
}

int main()
{
int prinimaemoe = 0;
int perevedennoe = 0;
interface(prinimaemoe, perevedennoe);

}
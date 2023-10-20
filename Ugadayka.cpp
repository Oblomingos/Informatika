#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(0));
int y;                                              //y - vvodimoe chislo; r - verhniy porog random; x - zagadivaemoe chislo;
int r;
printf("Vvedite verhniy porog viborki chisla: ");
scanf("%d", &r);
int x = rand()% (r+1);
printf("Vvedite chislo ot 0 do %d: ", r);
scanf("%d",&y);
do
{
    if (x==y)
    {
        printf("Verno\nEsli hotite povtorit, vveddite \"1\": ");
        scanf("%d",&r);
            if (r == 1)
            {
                main();
            }
            else
            {
                return 0;
            }
    }
    else
    {
        if (y < x)
        {
            printf("Slabo. Beri vishe!\nPovtori vvod: ");
            scanf("%d", &y);
        }
        else 
        {
            printf("Peregnal. Beri nizge!\nPovtori vvod: ");
            scanf("%d", &y);
        }
    }
}
while(x != y);
printf("Verno\nEsli hotite povtorit, vveddite \"1\": ");
        scanf("%d",&r);
            if (r == 1)
            {
                main();
            }
            else
            {
                return 0;
            }
}
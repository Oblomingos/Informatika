#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int test_summ(int x, int y, int z)
{
    if (trunc(pow(x, y)) != z)
    {
        printf("Operaciya vichislyaetsya nekorrektno\n");
        return 0;
    }
    else
    {
            return 1;
    }
}
int summ(int x, int y)//Stepen chisla
{
    int resultat = 1;
        for (int i = 0; i < y; i++)
        {
            resultat *= x;
        }
        if (test_summ(x, y, resultat) == 1)
        {
            return resultat;
        }
}
int test_nod(int x, int y, int z)
{
    if(x%z!=0 || y%z!=0)
    {
        printf("Operaciya vichislyaetsya nekorrektno\n");
        return 0;
    }
}
int nod(int x, int y)//Naibolshiy obsiy delitel
{
    if (x == y)
    {
        test_nod(x, y, x);
        return x;
    }
    do
    {
        if(fabs(x) > fabs(y))
        {
            if(x%y == 0)
            {
                test_nod(x, y, y);
                return fabs(y);
            }
            else
            {
                x = x%y;
            }
        }
        else
        {
            if(y%x == 0)
            {
                test_nod(x, y, x);
                return fabs(x);
            }
            else
            {
                y = y%x;
            }
        }
    }
    while (x != 0 || y != 0);
}
int test_nok(int x, int y, int z)
{
    if (z%x != 0 || z%y != 0)
    {
        printf("Operaciya vichislyaetsya nekkorrektno\n");
        return 0;
    }
}
int nok(int x, int y)//Naimenshee obsee kratnoe
{
    int resultat;
    resultat = (x*y)/nod(x, y);
    test_nok(x, y, resultat);
    return resultat;
}
//int test_summ_cifr(){}
int summ_cifr(int x)//Summa cifr chisla
{
    int y = 0;
    while (x > 9)
    {
        y += x%10;
        x = (x - x%10)/10;
    }
    return (x + y);
}
//int test_summ_cifr_ed(){}
int summ_cifr_ed(int x)//Summa cifr chisla do edinic
{
    while (x > 9)
    {
        x = summ_cifr(x);
    }
    return x;
}
//int test_product_cifr(){}
int product_cifr(int x)//Proizvedenie cifr chisla
{
    int y = 1;
    while (x > 9)
    {
        y *= x%10;
        x = (x - x%10)/10;
    }
    return (x * y);
}
//int test_product_cifr_ed(){}
int product_cifr_ed(int x)//Proizvedenie cifr chislf do edinic
{
    while (x > 9)
    {
        x = product_cifr(x);
    }
    return x;
}
int vibor(int x)
{
    int chislo, chislo_2;
    if(x == 1)
    {
        printf("Vvedite chislo: ");
        scanf("%d", &chislo);
        printf("Vvedite stepen: ");
        scanf("%d", &chislo_2);
        return summ(chislo, chislo_2);
    }
    else if(x == 2)
    {
        printf("Vvedite chislo: ");
        scanf("%d", &chislo);
        printf("Vvedite vtoroe chislo: ");
        scanf("%d", &chislo_2);
        return nod(chislo, chislo_2);
    }
    else if(x == 3)
    {
        printf("Vvedite chislo: ");
        scanf("%d", &chislo);
        printf("Vvedite vtoroe chislo: ");
        scanf("%d", &chislo_2);
        return nok(chislo, chislo_2);
    }
    else if(x == 4)
    {
        printf("Vvedite chislo: ");
        scanf("%d", &chislo);
        return summ_cifr(fabs(chislo));
    }
    else if(x == 5)
    {
        printf("Vvedite chislo: ");
        scanf("%d", &chislo);
        return summ_cifr_ed(fabs(chislo));
    }
    else if(x == 6)
    {
        printf("Vvedite chislo: ");
        scanf("%d", &chislo);
        return product_cifr(fabs(chislo));
    }
    else if(x == 7)
    {
        printf("Vvedite chislo: ");
        scanf("%d", &chislo);
        return product_cifr_ed(fabs(chislo));
    }
    else
    {
        printf("Nekkorektniy vvod. Poprobuyte snova: ");
        scanf("%d", &x);
        vibor(x);
    }
}

int main()
{
    int ind, povtor; 
    printf("\nVibor operacii:\n1.)Chislo v celoy stepeni\n2.)NOD\n3.)NOK\n4.)Summa cifr chisla\n5.)Summa cifr chisla do edinichnogo vida\n6.)Proizvedenie cifr chisla\n7.)Proizvedenie cifr chisla do edinichnogo vida\nVvedite nomer operacii: ");
    scanf("%d", &ind);
    printf("Resultat: %d", vibor(ind));
    printf("\nEsli zgelaete povtorit, vvedite \"1\": ");
    scanf("%d", &povtor);
    if (povtor == 1)
    {
        main();
    }
    return 0;
}
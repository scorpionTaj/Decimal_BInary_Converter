#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tab[8],i=0,dec=0;
    printf("Remplissage du valeur par 0 ou 1 \n");
    do
    {
        printf("SVP Tapper le nombre %d :",i+1);
        scanf("%d",&tab[i]);
        if (tab[i]==0 || tab[i]==1)
            i++;
    }while((tab[i]>=0 || tab[i]<=1) && i<8);
    printf("l'affichage de donnes : \n");
    for(i=0;i<8;i++)
    {
        printf("%5d",tab[i]);
    }
    for(i=0;i<8;i++)
    dec=dec+tab[i]*pow(2,7-i);
    printf("\nLa valeur en Decimal de ce nombre est : %d",dec);
    return 0;
}

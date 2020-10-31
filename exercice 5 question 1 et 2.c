#include<stdio.h>
#define N 7
main()
{
    /*exercice 5 question 1*/
    int T[5],i,x,k=0,position[N],l,j,taille=N;
    //lecture du tableau T
    printf("entrer les elements du tableau:");
    for(i=0;i<N;i++)
    {
        printf("\nT[%d]=",i);scanf("%d",&T[i]);
    }
    //lecture du element que nous voulez chercher dans le tableau
    printf("entrer l element que vous voulez chercher: \n");scanf("%d",&x);
    //recherche de l element dans le tableau
    for(i=0;i<N;i++)
    {
        if(T[i]==x)
        {
            position[k]=i;k++;
        }
    }
    if(k<1)
    {
        printf("%d n'existe pas dans le tableau.\n");
    }
    else
    {
        for(i=0;i<k;i++)
        {
            printf("%d se trouve dans le tabelau a la position %d.\n",x,position[i]);
        }
    }
    for(i=0;i<N;i++)
        {
           for(j=0;j<k;j++)

               if(i==position[j])
               {
                   for(l=position[j];l<taille-1;l++)
                       T[l]=T[l+1];
                       taille --;
                   for(l=j;l<k;l++)
                       position[l]--;
               }
        }
    for(i=0;i<taille;i++)
    {
        printf("\n%d",T[i]);
    }

}

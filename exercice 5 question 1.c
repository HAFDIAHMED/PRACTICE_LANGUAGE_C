#include<stdio.h>
#define N 7
main()

{
    /*exercice 5 question 1*/
    int T[N],i,j,x,k=0,occ[N],taille=N;
    for(i=0;i<N;i++)
    {
        printf("\nT[%d]=",i);scanf("%d",&T[i]);
    }
    printf("x=");scanf("%d",&x);
    for(i=0;i<N;i++)
    {
        if(T[i]==x)
        {
          occ[k]=i;k++;
        }
    }
    if(k<1)
    {
        printf("%d n'existe pas dans ce tableau.\n",x);
    }
    else
    {
        for(i=0;i<k;i++)
        {
            printf("\n%d se trouve a la position %d",x,occ[i]);
        }
        for(j=1;j<k;j++)
        {
        T[occ[j]]=T[occ[j]+1];taille--;
        }
    }
}

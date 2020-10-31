#include<stdio.h>
main()
{
    /*exercice 7 */
    int N1,N2,i,flag=0,p;
    printf("entrer la longeur dy tabelau T1:");scanf("%d",&N1);
    float T1[N1];
    //lecture du tableau T1
    printf("entrer les elements du tableau T1:");
    for(i=0;i<N1;i++)
    {
        printf("\nT1[%d]=",i);scanf("%f",&T1[i]);
    }
    printf("entrer la longeur dy tabelau T2:");scanf("%d",&N2);
    float T2[N2],T3[N1+N2];
    //lecture du tableau T2
    printf("entrer les elements du tableau T2:");
    for(i=0;i<N2;i++)
    {
        printf("\nT2[%d]=",i);scanf("%f",&T2[i]);
    }
    //remplissage du T3 par T1 et T2 et trier T3
    for(i=0;i<N1;i++)
    {
        T3[i]=T1[i];
    }
    for(i=N1;i<N1+N2;i++)
    {
        T3[i]=T2[i-N1];
    }
    //trier le tableau T3

    do
    {
        flag=0;
        for(i=0;i<N1+N2-1;i++)
        {
            if(T3[i]>T3[i+1])
            {
                p=T3[i+1];T3[i+1]=T3[i];T3[i]=p;flag=1;
            }

        }
    }while(flag==1);
    //affichage de tableau T3 trie
    for(i=0;i<N1+N2;i++)
    {
        printf("\n%f",T3[i]);
    }

}

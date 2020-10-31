#include<stdio.h>
#define N 10
main()
{
    /*exercice 1 */
    int T[10],T1[10],g,i,c=0,j,MAX=0,MIN=0,MOY=0,permutation=0;
    for(i=0;i<N;i++)
    {
        printf("entrer le %d eme element:",i);
        scanf("%d",&T1[i]);
        MOY+=T1[i];
        if(T1[i]>=MAX)
        {
            MAX=T1[i];
        }
        if(T1[i]<=MIN)
        {
            MIN=T1[i];
        }

    }
    for(j=0;j<N;j++)
    {
        T[j]=T1[N-1-j];
    }
    printf("le maximum des elements de T1 est:%d\n",MAX);
    printf("le minimum des elements de T1 est:%d\n",MIN);
    printf("la moyenne  des elements de T1 est:%d\n",MOY/N);
    for(i=0;i<N;i++)
    {
        printf("le %d eme element de tableau inverse de T1 est :%d\n",i,T[i]);
    }
    while(permutation==1)
    {
        for(j=0;j<N;j++)
        {
            if(T1[j-1]>T1[j])
            {
                g=T1[j-1];T1[j-1]=T1[j];T1[j]=g;
            }
            permutation=0;
        }
    }
    for(i=0;i<=N;i++)
    {
        printf("T1[%d]=%d\n",i,T1[i]);
    }
    for(i=0;i<N;i++)
    {
        c=0;
        for(j=0;j<=N;j++)
        {
            if(T1[i]==T1[j])
            {
                c++;
            }
        }
        printf("l element T1[%d] apparait %d foi(s).\n",i,c);
    }

}


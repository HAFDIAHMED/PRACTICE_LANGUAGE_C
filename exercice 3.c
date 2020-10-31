#include<stdio.h>
int amicaux(int N,int M)
{
    /*exercice 3*/
    int sdn=0,sdm=0,m,n;
    for(n=1;n<N;n++)
    {
        if(N%n==0)
        {
            sdn+=n;
        }
    }
    for(m=1;m<M;m++)
    {
        if(M%m==0)
        {
            sdm+=m;
        }
    }
    if(sdm==n && sdn==m)
    {
        return 1;
    }
    else{return 0;}

}
main()
{
  int T[10],i,j;
    for(i=0;i<10;i++)
    {
         printf("entrer le %d eme element:",i);
         scanf("%d",&T[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(amicaux(T[i],T[j])==1)
            {
                printf("%d et %d sont amicaux.\n",T[i],T[j]);
            }
        }
    }
}

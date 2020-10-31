#include<stdio.h>
#include<math.h>
int premier(int n)
{
    /*exercice 2*/
    int i,b;
    if(n<2)
    {
        b=0;
    }
    if(n=2)
    {
        b=1;
    }
    else
    {
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                b=0;
            }
        }
    }
    return (b);
}

main()
{
    int T[10],etat,i,c=0;
    for(i=0;i<10;i++)
    {
        printf("entrer le %d element:",i);
        scanf("%d",&T[i]);
    }
    i=0;
    do
    {
        if(T[i]<T[i+1])
        {
            etat=1;
        }
        else
        {
            etat=0;break;
        }
    }
    while(etat=0);
    if(etat==1)
    {
        printf("le tabeleau est trie par ordre croissant\n");
    }
    else{printf("le tableau n'est pas trie par ordre corissant\n");}
    for(i=0;i<10;i++)
    {
        if(premier(T[i])==1)
        {
            c++;printf("%d",c);
        }

    }
    if(c==10)
    {
        printf("le tableau est premier\n");
    }
    else{printf("\nle tableau n'est pas premier");}
}

#include<stdio.h>
main()
{
    //lecture de deux chaines de caracteres
    char S1[100],S2[100],cr,c;int N1=0,N2=0,j,comparaison=0,exister=0,i=0,k;
    printf("entrer la chaine S1:");
    do
    {
        scanf("%c",&c);S1[N1]=c;N1++;
    }
    while(c!='\n');
    char S3[N1];
     printf("entrer la chaine S2:");
    do
    {
        scanf("%c",&cr);S2[N2]=cr;N2++;
    }
    while(cr!='\n');
    N2=N2-1;N1=N1-1;
    //comparaison des deux chaines
    if(N1==N2)
    {
       for(i=0;i<N1;i++)
        {
            if(S1[i]==S2[i])
            {
                comparaison++;
            }
        }
        if(comparaison==N1)
        {
            printf("les chaines de caracteres saisi sont identiques.\n");
        }
        else{comparaison<N1;printf("les chaines de caracteres saisi ne sont pas identiques.\n");}
    }
    else
    {
       printf("les chaines de caracteres saisi  ne sont pas  identiques.\n");
    }
    for(j=0;j<N2;j++)
    {
        if(S1[j]==S2[0])
        {
            if(j+N2-1>N1)
            {
                printf("S2 n'existe pas dans S1.\n");
            }
            else
            {
              i=0;
              for(k=j;k<j+N2;k++)
              {
                  if(S1[k]==S2[k-j])
                  {
                      exister++;
                  }
                  i++;
              }
              if(exister==N2)
              {
                  printf("S2 existe dans S1.\n");
              }
              else
              {
                  printf("S2 n'existe pas dans S1.\n");
              }
            }
        }
    }
    //copier S1 dans une chaine S3
    for(i=0;i<N1;i++)
    {
        S3[i]=S1[i];
    }
    //concatenation de S1 et S2 dans S1
    for(i=0;i<N1;i++)
    {
        S1[i]='\0';
    }
    for(i=0;i<N1;i++)
    {
       S1[i]=S3[i];
    }
    j=0;
    for(i=N2;i<N1+N2;i++)
    {
        S1[i]=S2[j];j++;
    }
 }

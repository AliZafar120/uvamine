#include <stdio.h>
#include <stdlib.h>


int main()
{
    int cases,alpha[26]={0},i,max,cont;
    char ch;
    scanf("%d",&cases);
    scanf("%c",&ch);

    while(cases--)
    {

       while(scanf("%c",&ch)==1 && ch!='\n')
       {
        if(ch>=65 && ch <=90)
        {
            alpha[ch-65]++;
        }
        else if(ch>=97 && ch <=122)
        {
            alpha[ch-97]++;
        }
       }

    }



    for(i=0;i< 26;i++)
    {
      max=0;
        for(cases=0;cases<26;cases++)
        {
            if(alpha[cases]==0)continue;
            if(alpha[cases]>max)
            {
                ch='A'+cases;
                max=alpha[cases];
            }

        }
    if(max==0) break;
    printf("%c %d\n",ch,max);
    alpha[ch-65]=0;
    }


return 0;
}

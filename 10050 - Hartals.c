#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cases,days,parties,party[100],total,i,j,k,fal;
   scanf("%d",&cases);
   while(cases--)
   {
       total=0;
       scanf("%d",&days);
       scanf("%d",&parties);
       for(i=0;i<parties;i++)
       {
            scanf("%d",&party[i]);
            j=1;
            while(j*party[i]<=days)
            {
                fal=0;

                if((j*party[i]+1)%7==0 ||(j*party[i])%7==0)
                { j++;continue;}
                for(k=0;k<i;k++)
                {
                    if((j*party[i])%party[k]==0)
                    {
                        fal=1;
                        break;
                    }
                }
                if(fal){j++;continue;}
                total++;
                j++;

            }
       }
        printf("%d\n",total);
   }


    return 0;
}

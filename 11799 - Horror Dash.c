#include <stdio.h>
#include <stdlib.h>

int main()
{

   char ch;
   int max,cur,cases,i;
   scanf("%d",&cases);
   for(i=1;i<=cases;i++)
   {
       max=0;
       while(scanf("%d%c",&cur,&ch)==2 && ch!='\n')
       {
        if(cur>max) max=cur;
       }
       printf("Case %d: %d\n",i,max);

   }

    return 0;
}

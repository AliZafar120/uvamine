#include <stdio.h>
#include <stdlib.h>


int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}



int main()
{
 int cases,i,r,rel[500]={0},min,sum1,sum2;
 scanf("%d",&cases);

 while(cases--)
 {
     sum1=sum2=0;

     scanf("%d",&r);
     for(i=0;i < r;i++)
     {
         scanf("%d",&rel[i]);
     }
     qsort(rel,r,sizeof(*rel),comp);

    for(i=0;i<r;i++)
    {
            sum1+=abs(rel[(r-1)/2]-rel[i]);
            sum2+=abs(rel[(r-1)/2+1]-rel[i]);
    }



    if(r%2==0)
    {
     if(sum1>sum2)printf("%d\n",sum1);
     else printf("%d\n",sum2);
    }
    else printf("%d\n",sum1);

 }

    return 0;
}

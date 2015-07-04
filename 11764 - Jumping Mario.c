#include <stdio.h>
#include <stdlib.h>

int main()
{
 int cases,pillars,prev,h,l,i,current,j;
 scanf("%d",&cases);

 for(j=1;j<=cases;j++)
 {
     h=0;
     l=0;
    scanf("%d",&pillars);
    scanf("%d",&prev);
    for(i=1;i< pillars;i++)
    {
     scanf("%d",&current);
     if(prev<current)h++;
     if(prev>current)l++;
     prev=current;
    }
    printf("Case %d: %d %d\n",j,h,l);
 }

 return 0;
}

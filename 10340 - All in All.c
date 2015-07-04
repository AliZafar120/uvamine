#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char s[1000000],ss[1000000];
   long int len,i,j;

    while(scanf("%s %s",&s,&ss)==2)
    {
        i=0;
        len=strlen(ss);

        for(j=0;j<len;j++)
        {
            if(ss[j]==s[i]) i++;
        }

        if(i==strlen(s)) printf("Yes\n");
        else printf("No\n");

    }

    return 0;

}

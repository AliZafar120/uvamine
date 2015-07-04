#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,total;

    while(scanf("%d %d",&x,&y)==2)
    {
        total=x;
        while(x/y)
        {
            total+=x/y;
            x=x/y+x%y;
        }
        printf("%d\n",total);
    }

    return 0;
}

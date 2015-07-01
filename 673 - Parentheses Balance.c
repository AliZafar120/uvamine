#include <stdio.h>
#include <string.h>

int main()
{
    int cases,i,len,fb,tb,j,k,isright;
    char brac[128],c;
    while(scanf("%d",&cases)==1)
    {
        scanf("%c",&c);

        for(j=0;j<cases;j++)
        {
            k=0;
            fb=0,tb=0;
            isright=1;

            while(scanf("%c",&c)==1 && c!='\n')
            {
                if(c=='(') {fb++;brac[k++]=')';}
                else if (c=='[') {tb++;brac[k++]=']';}
                else if (c==')')
                {
                    if(brac[k-1]==')'){
                            fb--;
                            k--;
                        }
                    else isright=0;
                    if(fb<0) isright=0;
                }
                else if (c==']')
                {
                    if(brac[k-1]==']'){
                            tb--;
                            k--;
                        }
                    else isright=0;
                     if(tb<0) isright=0;
                }

            }




          /*  scanf("%s",&brac);
            printf("we got %s",brac);
            len=strlen(brac),fb=0,tb=0;

            for(i=0;i<len;i++)
            {
                if(brac[i]=='(') fb++;
                else if (brac[i]=='[') tb++;
                else if (brac[i]==')')
                {
                    fb--;
                    if(fb<0) break;
                }
                else if (brac[i]==']')
                {
                    tb--;
                    if(tb<0) break;
                }

            }*/

     if(fb==0 && tb==0 && isright==1) printf("Yes\n");
     else printf("No\n");

        }
    }
    return 0;
}

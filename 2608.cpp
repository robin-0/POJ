/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int i,n,pre,temp;
    char inp[2005];

    while(gets(inp))
    {
        n=strlen(inp);

        temp=0;

        for(i=0;i<n;i++)
        {
            if ((inp[i]=='B')||(inp[i]=='F')||(inp[i]=='P')||(inp[i]=='V'))
                pre=1;
            else if ((inp[i]=='C')||(inp[i]=='G')||(inp[i]=='J')||(inp[i]=='K')||(inp[i]=='Q')||(inp[i]=='S')||(inp[i]=='X')||(inp[i]=='Z') )
                pre=2;
            else if( (inp[i]=='D')||(inp[i]=='T'))
                pre=3;
            else if (inp[i]=='L')
                pre=4;
            else if ((inp[i]=='M')||(inp[i]=='N'))
                pre=5;
            else if(inp[i]=='R')
                pre=6;
            else
                pre=0;

            if(temp==pre)
                continue;

            else
            {
                if(pre!=0)
                    printf("%d",pre);
                temp=pre;

            }

        }
        printf("\n");
    }

    return 0;

}



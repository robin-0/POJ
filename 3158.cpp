/*بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,max,n1,n2;
    char up[200],down[200],temp[200];

    while(scanf("%s%s",down,up)!=EOF)
    {
        n1=strlen(down);
        n2=strlen(up);

        if(n2>n1)
        {
            strcpy(temp,up);
            strcpy(up,down);
            strcpy(down,temp);

            n1=n1^n2;
            n2=n1^n2;
            n1=n1^n2;
        }


        max=0;
/*matcing*/
        for(i=0;i<=(n1-n2);i++)
        {
            if((down[i]+up[0])<=99)
            {
                for(j=1;j<n2;j++)
                {
                    if((down[i+j]+up[j])>99)
                        break;
                }
                if(j==n2)
                {
                    max=n2;
                    break;
                }
            }
        }

        if(max!=n2)
        {

            /*back*/
            for(i=n1-n2+1;i<n1;i++)
            {
                if((down[i]+up[0])>99)
                {
                    continue;
                }
                else
                {
                    for(j=1;(i+j)<n1;j++)
                    {
                        if((down[i+j]+up[j])>99)
                            break;
                    }
                    if((j>max)&&((i+j)==n1))
                        {max=j; }
                }
            }


            /*front*/
            for(i=0;i<n2;i++)
            {
                if((down[i]+up[n2-1])>99)
                {
                    continue;
                }
                else
                {
                    for(j=1;(i-j)>=0;j++)
                    {


                        if((down[i-j]+up[n2-1-j])>99)
                            break;
                    }
                    if((j>max)&&((i-j)<0))
                        {max=j; }
                }


            }






            }
 printf("%d\n",n1+n2-max);


    }
    return 0;
}


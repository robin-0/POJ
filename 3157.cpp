بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    char inp[10005];
    int len,i,under,capital,err;

    while(scanf("%s",inp)!=EOF)
    {
        len=strlen(inp);
        under=0;
        capital=0;
        err=0;

        for(i=0;i<len;i++)
        {
            if(inp[i]=='_')
                {
                    under++;
                    if((inp[i+1]=='_')&&(i<len-1))
                        { err++; break; }
                }
            else if(inp[i]<=90&&inp[i]>=65)
                capital++;
        }

        if((inp[0]<=90&&inp[0]>=65)||err>0||(inp[len-1]=='_')||(inp[0]=='_'))
                        printf("Error!\n");



        else
        {

        if(under==0&&capital>0)  //Java
            {
                for(i=0;i<len;i++)
                {
                    if(inp[i]<=90&&inp[i]>=65)
                    {
                        printf("_%c",inp[i]+32);
                    }
                    else
                        printf("%c",inp[i]);

                }
                printf("\n");

            }
        else if(under>0&&capital==0)  //C++
            {
                for(i=0;i<len;i++)
                {
                    if(inp[i]=='_')
                    {
                        i++;
                        printf("%c",inp[i]-32);
                    }
                    else
                        printf("%c",inp[i]);

                }


                printf("\n");

            }
        else if(under!=0&&capital!=0)
            printf("Error!\n");
        else
            printf("%s\n",inp);
        }
    }

    return 0;

}


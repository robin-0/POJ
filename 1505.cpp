/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 100000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define getInt(a) scanf("%d",&a);


int n;
int array[MAX];

int check (long long int max)
{
    int lagbe=1;
    int i;
    long long int taken=0;

    for(i=n-1;i>=0;i--)
    {
        if(taken+array[i]>max)
        {
            lagbe++;
            taken=array[i];
        }

        else
        {
            taken+=array[i];
        }
    }

    return lagbe;
}

long long int binSearch(long long int lo ,long long int hi , int people )
{
    long long int mid=(lo+hi)/2;
    int temp;

    while(lo<hi)
    {
        temp=check(mid);

        if(temp>people)
        {
            lo=mid+1;
        }

        else
        {
            hi=mid;
        }

        mid=(lo+hi)/2;
    }

    return mid;

}


int main()
{
    int k,i,j,T,miss;
    long long int lo,hi,optimum,current;
    int kaaj[MAX];
//OUTPUT
    getInt(T);

    while(T--)
    {
        getInt(n)
        getInt(k)

        for(i=0;i<n;i++)
            getInt(array[i]);

        lo=array[0];
        for(i=1;i<n;i++)
            if(lo<array[i])
                lo=array[i];
        hi=0;

        for(i=0;i<n;i++)
            hi+=array[i];

        optimum=binSearch(lo,hi,k);

        //DEBUG(optimum);
//printf("\n\n");

        j=k-1;
        current=0;

        for(i=0;i<k;i++)
            kaaj[i]=0;

        miss=k-1;

        for(i=n-1;i>=0;i--)
        {
            if(miss>i)
            {
                kaaj[j--]=current;

                for(;i>=0;i--)
                {
                    kaaj[j--]=array[i];
                }

                current=0;

                break;
            }

            if(current+array[i]>optimum)
            {
                kaaj[j--] = current;
                current = array[i];
                miss--;
            }

            else
            {
                current+=array[i];
            }
        }

        if(current!=0)
            kaaj[j--]=current;



//for(i=0;i<k;i++)
  //  DEBUG(kaaj[i]);
        current=0;

       // printf("\n\n");

        for(i=0;i<miss;i++)
        {
            kaaj[i]=array[i];
            current+=array[i];
        }







//for(i=0;i<k;i++)
  //  DEBUG(kaaj[i]);

        j=0;

        current=array[0];
        printf("%d",array[0]);


        for(i=1;i<n;i++)
        {
            if(kaaj[j]==current)
            {
                current=0;
                printf(" /");
                j++;
            }

            current+=array[i];

            printf(" %d",array[i]);
        }

        printf("\n");

    }

    return 0;
 }

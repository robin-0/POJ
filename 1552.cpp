﻿/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
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
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back




int main()
{
    //Bismillahir Rahmanir Rahi,
    //Rabbi Zidni Ilma

    while(1)
    {
        vector <int> array;
        int found[1000]={0,};
        int inp;
        while(1)
        {
            getInt(inp)

            if(inp==-1)
                return 0;
            if(inp==0)
                break;
            else
            {
                array.pb(inp);
                found[inp]=1;
            }
        }

        int cnt=0;
        int i;

        for(i=0;i<array.size();i++)
        {
            if(found[array[i]*2]==1)
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}



/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double R,ans;
    int n;

    while(scanf("%lf",&R)!=EOF){

          ans=R;
          n=11;
          while(n--){
            scanf("%lf",&R);
            ans+=R;
          }

    printf("$%.2lf\n",ans/12);

    }
    return 0;
}

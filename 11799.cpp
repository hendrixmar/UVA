#include <bits/stdc++.h>        //

#define rows 10
#define cols 10

using namespace std;

int main(){

    int N, max, temp, i= 1, T;
    scanf("%d", &T);
    while( T--){


        scanf("%d",&N);
        max = 0;
        while(N--){
            scanf("%d",&temp);

            max = temp > max ? temp : max;
        }

        printf("Case %d: %d\n",i, max );
        i++;
        
    }





        
}

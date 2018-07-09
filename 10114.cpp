#include <bits/stdc++.h>        //

#define rows 10
#define cols 10

using namespace std;

int main(){

    int ML, DR;
    double DP, AL, temp, debth, value;
    int m;
    int last = 0;
    int j, i;
    double DP_A[102];
    
    
    while(scanf("%d %lf %lf %d", &ML, &DP, &AL, &DR)){
        
        if(ML < 0)
            break;

        last = 0;
        for(i =0; i < DR; i++){
            scanf("%d %lf", &m, &temp);


            for(j = m; j < 102; j++)
                DP_A[j] = temp;

            
            

        }
  
        debth = AL;
        
        value = (DP+AL)*(1-DP_A[0]);
        
        i = 0;

        DP = AL /(double)ML;
        
        while(debth > value ){
            
            debth -= DP;
            
            i++;
            
            temp = DP_A[i];

        
            value = value*(1-temp);
            
            
            

        }


        printf("%d %s\n", i, i == 1 ? "month" :"months"  );
        
    
    }



    return 0;

        
}

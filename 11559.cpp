#include <bits/stdc++.h>        //

#define rows 10
#define cols 10

using namespace std;

int main(){

    int N, B, H, W;
    int temp;
    int j;
    int prices[19];
    int rooms_h[19][14];
    bool stop;
    int min;
    int i;
    while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF ){

        for(int i = 0; i < H; i++){
            scanf("%d", &prices[i]); // P

            for(j = 0; j < W; j++){
                scanf("%d", &temp);

                rooms_h[i][j] = temp; // a
            }

        }
        min = INT_MAX;
        for(i = 0; i < H; i++){
            
            
            for(j = 0; j < W; j++){

                if(rooms_h[i][j] >= N ){
                    
                    break;
                   
                }
            
            }

            if(j != W){
                min = min > prices[i] ? prices[i] : min;
            }
            

        }

        
        if(min != INT_MAX && min*N <= B){
            printf("%d\n", min*N);
        }else{
            printf("stay home\n");
        }


    }





        
}

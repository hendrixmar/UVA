#include<bits/stdc++.h>

using namespace std;



int main(){
    
    int M, T,temp, P;
    unsigned long long N;
    vector<int> fibo[21];
    
    for(int i = 1; i < 20; i++)
        {
            T = pow(2,i-1)*3;
            fibo[i].push_back(0);
            fibo[i].push_back(1);
            P = pow(2,i);
            for(int j = 2; j < T; j++)
            {
                fibo[i].push_back((fibo[i][j-2] + fibo[i][j-1])%P);
            }
            
        }

    
    
    while(scanf("%llu %d",&N, &M) != EOF){

    

        if( M == 0){
            cout<<0<<endl;
            continue;    
        }
        T =  N%((int)pow(2,M-1)*3);


        cout<<fibo[M][T]<<endl;
        

    }
    
    
    
    return 0;
}

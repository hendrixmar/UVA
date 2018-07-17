#include<bits/stdc++.h>

using namespace std;

int main(){

    int C, T;
    char P;
    int cand, M,N;
    

    while(cin>>M>>N, M + N){
        
        if( M < 2 or N < 2 ){
             cout<<M*N;
     
     
        }else if (min(M,N) == 2){
            
            if((M*N%8) == 0)
                cout<< (M*N/8)*4;
            else
                cout<< (M*N/8)*4 + ((M*N%8) < 4 ? 2 : 4);
        }
        else{
            cout<< ceil((M*N)/2.0);
        }
        
        cout<<" knights may be placed on a "<< M<<" row "<<N<<" column board."<<endl;

    }
        
  
}

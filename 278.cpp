#include<bits/stdc++.h>

using namespace std;


int main(){

    int C, T;
    char P;
    int cand, M,N;
    
    cin>>T;
    
    while(T--){
        
        cin>>P;
        
        cin>>M>>N;
        
        switch (P)
        {   
            case 'Q':
            case 'r':
                cout<<M<<endl;
                break;
            
                
            case 'K':
                cout<<(ceil(M/2.0)*ceil(N/2.0) )<<endl;
                break;
            case 'k':
                cout<< ceil((M*N)/2.0) <<endl;
                break;
        
        }


    }
        
  
}

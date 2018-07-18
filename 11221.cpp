#include<bits/stdc++.h>

using namespace std;

void fun(map<string, int> &check){

    
}


int main(){

    int C;
    int cand, T, t=1, N;
    double value;
    string data;
    string temp;
    string square[101];
    map<string, int> check;
    
    cin>>T;
    getchar(); 
    
    while(t <= T){
        
        getline(cin,data);
        
        transform(data.begin(), data.end(), data.begin(), ::tolower);
        
     
        temp.clear();
        for(auto i : data){

            if(isalpha(i)){
                temp.push_back(i);
            }
        }
        

        N = sqrt(temp.size());
        
        value = sqrt(temp.size()); 
        check.clear();

        if( (value - ceil(value)) != 0){
            
            cout<<"Case #"<<t<<":"<<endl;
            cout<<"No magic :("<<endl;
            t++;
            continue;
        }

        for(int i = 0; i < N; i++)
        {
            square[i] = temp.substr(0,N);
            check[ square[i] ] = 1;
            temp = temp.substr(N);         
            
        }
        
        for(int i = 0; i < N; i++) // check horizontals
        {
            reverse(square[i].begin(),square[i].end());
            check[ square[i] ] = 1;
            reverse(square[i].begin(),square[i].end());
            
        }

        for(int i = 0; i < N; i++) // verticals
        {   
            temp.clear();
            
            for(size_t j = 0; j < N; j++)
            {
                temp.push_back(square[j][i]);
            }

            check[ temp ] = 1;
            reverse(temp.begin(),temp.end());
            check[ temp ] = 1;
            reverse(temp.begin(),temp.end());
            
        }

        cout<<"Case #"<<t<<":"<<endl;
        if(check.size() == N or N == 1 or check.size() == 1){
            cout<<N<<endl;
        }else{
            cout<<"No magic :("<<endl;
        }
        
        
    
        t++;

    }
        
  
}

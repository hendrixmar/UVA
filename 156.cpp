#include<bits/stdc++.h>

using namespace std;

void fun(map<string, int> &check){

    
}


int main(){

    int C, N=0;
    
    string square[1001];
    string temp;
    map<string, int> check;
    vector<string> output;
    
    while(1){
        
        
        cin>>square[N];
        
        if(square[N][0] == '#'){
            break;
        }
        N++;
      
    }

    for(size_t i = 0; i < N; i++)
    {
        temp = square[i];
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        sort(temp.begin(), temp.end() );

        check[temp]++;
    }
    

    for(size_t i = 0; i < N; i++)
    {
        temp = square[i];
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        sort(temp.begin(), temp.end() );

        if(check[temp] == 1){
            output.push_back(square[i]);
        }
        
    }
    


    sort(output.begin(), output.end());
    
    for(auto i : output){
        cout<<i<<endl;
    }
}

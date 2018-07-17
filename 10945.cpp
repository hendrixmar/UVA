#include<bits/stdc++.h>

using namespace std;


bool check(string input){

    for(int i= 0; i < input.size(); i++){
        if(input[i] != input[input.size()-i-1]){
            return false;
        }
    }
    return true;
}

int main(){

    int C;
    int cand;
    string data;
    string temp;
    
    while(1){
        
        getline(cin,data);
        
        

        

        if(data == "DONE")
            break;


        transform(data.begin(), data.end(), data.begin(), ::tolower);

        for(auto i : data){

            if(isalpha(i)){
                temp.push_back(i);
            }
        }
        
        cout<< (check(temp) ? "You won't be eaten!" : "Uh oh..")<<endl;
        temp.clear();


    }
        
  
}

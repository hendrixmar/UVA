#include<bits/stdc++.h>

using namespace std;
unsigned long long int base_c(char num);


bool check(string A, unsigned long long int B){
    
    
    for(auto i : A){

        if(base_c(i) >= B ){
            return 1;
        }
        
    }

    return 0;

}

unsigned long long int base_c(char num){
    return 'A' <= num ? 10 + (num-'A') : num - '0';
}

char base_i(unsigned long long int num){
    return num < 10 ? '0' + num : 'A' + num%10;
}


string convert_base(unsigned long long int number, unsigned long long int base){

    string conversion;
    char temp;
    if(number == 0){
        return "0";
    }

    while(number){

        temp = base_i(number%base);
        conversion.push_back(temp);
        number /= base;
    }   
    reverse(conversion.begin(), conversion.end());
    return conversion;

}

unsigned long long int convert(string A, unsigned long long int B){ // convert the number of any base to base 10

    unsigned long long int temp = 0;
    unsigned long long int e = A.size()-1;
    for(auto i : A){
        temp += base_c(i)*pow(B,e);
        e--;

    }   

    return temp; 
}

int main(){

    unsigned long long int A,B;
    string C;
    unsigned long long int temp;
    string conver;
    
    while(cin>>A>>B>>C  ){

        
        
        if(check(C, A) ){
            printf("%s is an illegal base %lld number\n", C.c_str(),A );
            continue;
        }
        
        temp = convert(C, A);
        
        conver = convert_base(temp, B);
        printf("%s base %lld = %s base %lld\n",C.c_str(),A, conver.c_str(), B);
        
        
        
    }
        
    return 0;
}

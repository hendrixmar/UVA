#include<bits/stdc++.h>

using namespace std;

vector<int> generate(void){

    int count = 31623;
    int temp;
    bool prime;
    vector<int> primes;

    primes.push_back(2);
    for(int i = 2; i < count; i++)
    {
        temp = ceil(sqrt(i))+1;
        prime = true;
        for(int j = 2; j < temp; j++)
        {
            if(i % j == 0){
                prime = false;
                break;
            }
        }

        if(prime){
            primes.push_back(i);
            
        }
            
    }
  
    return primes;
}

int reduce(unsigned int &value, int f){

    int times = 0;
    while(value%f == 0){
        value /= f;
        times++;
    }

    return times;
}

int main(){

    unsigned int number,L,U,max_name, i;
    int N;
    int j;
    
    
    int count, temp, max;
    vector<int> primes = generate();
    
    
    scanf("%d", &N);
    while(N--){
        scanf("%u %u",&L,&U);
        max = 0;
        for(i = L; i <= U; i++)
        {   
            temp = 1;
            number = i;
            for(auto f : primes){

                temp *= (reduce(number, f) +1);

                if(number == 1){
                    break;
                }

            }
            if(max < temp){
                max = temp;
                max_name = i;
            }
        }
        
        printf("Between %u and %u, %u has a maximum of %d divisors.\n", L,U,max_name,max);


    }

    
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
#include<string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N, size;


    string word, temp;
    int flag;

    vector<string> input;

    while(scanf("%d %d", &N, &size) != EOF)
    {


        while(N--){
            cin>>word;
            input.push_back(word);
        }

        word = input[0];
        input.erase(input.begin());
        cout << word <<endl;



            for(int i = 0; input.size() != 1; i++){

                flag= 0;
                for(int j= 0; j < size && flag < 2; j++){

                    if(word[j] != input[i][j]){

                        flag++;

                    }
                }

                if( flag < 2){
                    cout<<input[i]<<endl;
                    word = input[i];

                    input.erase(input.begin() + i);
                    i= 0;
                }



            }

            cout<<input[0]<<endl;
            input.erase(input.begin());
    }




    return 0;
}

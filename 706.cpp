#include<bits/stdc++.h>

using namespace std;



int main(){

    char C;
    string number;
    
    int size;

    while(1){
        cin>>size>>number;

        /*if(number.find('0') == -1 )
        break;
        */

        if(size == 0 && number == "0"){
            break;
        }
        int cont = 0;
        for(auto i : number){
            
            if(i == '1' || i == '4' ){
                
                cout<<string(size+2,' ');
            }
            else{
                cout<<" "<<string(size,'-')<<" ";
            }

            if( cont != number.size()-1)
                    cout<<" ";
            cont++;
        }
        cout<<endl;

        for(int j = 0; j < size; j++){
            cont = 0;
            for(auto i : number){
                switch(i){
                    case '5': case '6':
                        cout<<"|"<<string(size+1,' ');break;
                        
                    case '1': case '2': case '3': case '7':
                        cout<<string(size+1,' ')<<"|";break;
                    
                    default:
                        cout<<"|"<<string(size,' ')<<"|";break;
                }

                if( cont != number.size()-1)
                    cout<<" ";
                cont++;
            }
            cout<<endl;
        }
        
        cont = 0;
        for(auto i : number){
            switch(i){
                    
                case '1': case '0': case '7':
                    cout<<string(size+2,' ');break;
                
                default:
                    cout<<" "<<string(size,'-')<<" ";break;
            }

            if( cont != number.size()-1)
                    cout<<" ";
            cont++;
        }
        cout<<endl;
        
        for(int j = 0; j < size; j++){
            cont = 0;
            for(auto i : number){
                switch(i){
                    case '2':
                        cout<<"|"<<string(size+1,' ');break;
                        
                    case '6': case '8': case '0':
                        cout<<"|"<<string(size,' ')<<"|";break;
                    
                    default:
                        cout<<string(size+1,' ')<<"|";break;
                }

                if( cont != number.size()-1)
                    cout<<" ";
                cont++;
            }
            cout<<endl;
        }


        cont = 0;
        for(auto i : number){

            if(i == '1' || i == '4' || i == '7' ){
                
                cout<<string(size+2,' ');
            }
            else{
                cout<<" "<<string(size,'-')<<" ";
            }

            if( cont != number.size()-1)
                    cout<<" ";
            cont++;
        }


        cout<<endl<<endl;

    }
        

}

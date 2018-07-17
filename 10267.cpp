#include<bits/stdc++.h>

int M , N;
char image[251][251] = {0};

using namespace std;

void fill(int x, int y, char color, char colorS ){
    
    if( x < 0 || x >= M || y < 0 || y >= N )
        return;

    if(image[y][x]  != color || image[y][x] == colorS    )
        return;

    
    image[y][x] = colorS;

    fill(x+1,     y, color,colorS);
    fill(x-1,     y, color,colorS);
    fill(x,     y+1, color,colorS);
    fill(x,     y-1, color,colorS);
    
    
    
   
    
    

}

int main(){

    string C;
    int X1, X2, Y1, Y2, X, Y;
    int i, j, temp;
    
    string number;
    
    int size;
 
        
    


    while(1){
     
        cin>>C;

        if(C[0] == 'X')
            break;

        switch(C[0]){


            case 'I':

                cin>>M>>N;
                

            case 'C':

                for(i = 0; i < N; i++){
                    memset(image[i],'O',M);
                    image[i][M] = '\0';
                }
               
            break;


            case 'L':
                cin>>X1>>Y1>>C;
                image[Y1-1][X1-1] = C[0];

            break;

            case 'S':
                cin>>C;
                cout<<C<<endl;
                for(i = 0; i < N; i++){
                    printf("%s\n", image[i]);
                }
            break;

            case 'H':
                
                cin>>X1>>X2>>Y>>C;
                if(X1 > X2){
                    temp = X1;
                    X1 = X2;
                    X2 = temp;
                }
                for(i = X1-1; i < X2; i++){
                    image[Y-1][i] = C[0];
                }
            break;
            
            case 'V':
                
                cin>>X>>Y1>>Y2>>C;

                if(Y1 > Y2){
                    temp = Y1;
                    Y1 = Y2;
                    Y2 = temp;
                }
              
                
                for(i = Y1-1; i < Y2; i++){
                    image[i][X-1] = C[0];
                }
            break;

            case 'K':
                
                cin>>X1>>Y1>>X2>>Y2>>C;
                if(Y1 > Y2){
                    temp = Y1;
                    Y1 = Y2;
                    Y2 = temp;

                }

                 if(Y1 > Y2){
                    temp = Y1;
                    Y1 = Y2;
                    Y2 = temp;
                }
                if(X1 > X2){
                    temp = X1;
                    X1 = X2;
                    X2 = temp;
                }
                
                for(i = Y1-1; i < Y2; i++){
                    for(j = X1-1; j < X2; j++){
                        image[i][j] = C[0];
                    }
                }
            break;

            case 'F':
                
                cin>>X>>Y>>C;
                
                
                fill(X-1,Y-1, image[Y-1][X-1],C[0]);

                
            break;

            default:
                getline(cin, C);
            break;
        

        }

        
    }
        

}

#include <bits/stdc++.h>        //

#define rows 10
#define cols 10

using namespace std;

int main(){

    int H, T,U, D, F, cont;
    double  pos, Dt, Ut, temp;
    
    while(scanf("%d %d %d %d", &H, &U, &D, &F), H != 0){
        pos = 0;
        cont = 0;
        Dt = D;
        
        temp = U*(F/100.0);
        Ut = U;
        while(1){
            cont++;
            
        
            pos += 0 < Ut ? Ut : 0; // climbing 
          
            
            
            if(pos > H){

                break;
                
            }
            
            pos -= Dt;              // sliding


            

            Ut -= temp;
            
            if(pos  < 0){
                break;
            }
            
            
            
           
           
        }
      

        printf("%s on day %d\n", pos > H ? "success" : "failure",cont );
    }





        
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void backtrack(char mines_input[][101],char mines_output[][101], int width, int height){
    
    int j,i,counter;
    

    for(i = 0; i < height; i++){

            counter= 0;
        
            for(j = 0; j < width; j++, counter =0){
                
                if(mines_input[i][j] == '*'){
                    mines_output[i][j] = '*';
                    continue;
                }
                    
                /*  ==> */
                counter += j < width - 1 && mines_input[i][j+1] == '*';
                

                /*  <== */
                counter += 0 < j && mines_input[i][j-1] == '*' ;
                

                /*  ^ */
                counter += (0 < i && mines_input[i-1][j] == '*') ;
            
                /*  v */
                counter += (i < height - 1 && mines_input[i+1][j] == '*');
                

                /* v->  */
                counter += (i < height - 1 && j < width - 1  && mines_input[i+1][j+1] == '*');
 

                /*   ^->  */
                counter += (0 < i  && j < width - 1  && mines_input[i-1][j+1] == '*');
        

                /*  <-^  */
                counter += (0 < i  && 0 < j   && mines_input[i-1][j-1] == '*');
        
                /*  <-ṿ  */
                counter += ( i < height - 1  && 0 < j  && mines_input[i+1][j-1] == '*');
                

                mines_output[i][j] = '0' + counter;
            
            }

            mines_output[i][width] = '\0';
        }

    

}

int main(){

    char mine_field[101][101];
    char output[101][101];
    int width, height, j,i, field=1;

    scanf("%d %d", &height, &width);

    while( height || width){

        for(i = 0; i < height; i++){

          
            scanf("%s", mine_field[i]);


            

        }


        backtrack(mine_field,output, width, height);
        printf("Field #%d:\n", field++);
        for(i = 0; i < height; i++){

            printf("%s\n", output[i]);

        }

        scanf("%d %d", &height, &width);
        if(height || width)
            printf("\n");
    }




}
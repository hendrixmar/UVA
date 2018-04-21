#include<stdio.h>


#include<string.h>



int main(int argc, char const *argv[]) {


        int n;
        char input[102];
        char *token;
        int i;
        while(scanf("%d", &n), n ){

            scanf("%s", input);

            if(n ==1){
                for(i = strlen(input) -1; i > -1; i-- )
                    printf("%c",input[i]);
                
               
            }else{
                n = strlen(input) / n;
                token = input;
                while(token){

                    for(i = n-1; i > -1; i--){
                        printf("%c",*(token+i) );
                    }
                    token =  *(token +n) == '\0' ? 0: token + n ;

                }
                
            }
            printf("\n");
        }




    return 0;
}

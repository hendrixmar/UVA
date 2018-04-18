#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void change_values(int *, int *);

void change_values(int *a, int *b){

    int temp;

    temp = *a;

    *a = *b;
    *b = temp;

}

int main(){

    char *input_string = (char *)malloc(1000001*sizeof(char));
    int cases, a, b,  i,T=1;
    char temp;
    char *position;
    

    while(scanf("%s", input_string) != EOF){

        scanf("%d", &cases);
        printf("Case %d:\n", T++);
        for(i = 0; i < cases; i++){

            
            scanf("%d %d",&a, &b);

            if(b < a)
                change_values(&a,&b);
            
            temp = input_string[a] == '0' ? '1' : '0' ;

            position = strchr(input_string + a, temp);

            printf("%s\n",  input_string + b < position || position == NULL   ? "Yes" : "No" );


        }

    }
    free(input_string);
    return 0;
}
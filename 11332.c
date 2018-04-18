#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int digit(char *number){

    if(strlen(number) == 1){
        return atoi(number);
    }
    int total= 0;
    char string[15];
    while(*number != '\0' ){
        total += (int)(*number - '0');
        number = number +1;
    }

    sprintf(string, "%d", total);
    return digit(string);
}

int main(int argc, char const *argv[]) {

    char string[15];

    while(scanf("%s", string), *string != '0'){
            printf("%d\n", digit(string));
    }



    return 0;
}

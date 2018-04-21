#include<stdio.h>


#include<ctype.h>

int check(const char character){
    switch (character) {
        case 'A':case 'a':
        case 'E':case 'e':
        case 'O':case 'o':
        case 'U':case 'u':
        case 'I':case 'i':
        return 1;
        break;

        default:
        return 0;
    }
}

int main(int argc, char const *argv[]) {


    char current;
    char consonant;

    while( (current = getchar()) != EOF ){

        if(isalpha(current) ){

            if(check(current)){
                while(isalpha(current)){
                    printf("%c", current);
                    current = getchar();

                    if(current == EOF){
                        break;
                    }
                }

                    printf("ay%c", current);

            }else{

                consonant = current;
                current = getchar();
                while(isalpha(current)){
                    printf("%c", current);
                    current = getchar();

                    if(current == EOF){
                        break;
                    }
                }

                    printf("%cay%c",consonant, current);

            }

        }else{
            printf("%c", current);
        }

    }




    return 0;
}

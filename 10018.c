#include<stdio.h>
#include<math.h>
#include<string.h>

long long reverse(long long int value){

    int size, digit,i, exponent;
    long long int output=0;
    char string_temp[12];

    sprintf(string_temp, "%lli", value);
   
    
    size = strlen(string_temp);
    exponent = (int)pow(10, size-1);
    for(i=0; i < size; i++){
        
        digit = string_temp[size-1-i] - '0';
        
        output += digit*exponent;
        exponent = exponent /10;
    }


    return output;
}


int palindrome_checking(long long int value){

    
    char string_temp[13];
    int size, i;

    sprintf(string_temp, "%lli", value);
    
  
    size = strlen(string_temp);

    for(i = 0; i < size/2; i++){
        if(string_temp[i] != string_temp[size-i-1] )
            return 0;
    }

    return 1;
}

int main(){

    long long int input;
    int times;
    int iteration= 0;
    scanf("%d", &times);
    int temp;

    while(times--){

       

        scanf("%lli", &input);
  
      
      
        do{
            iteration++;
            input = input + reverse(input);

        }while(!palindrome_checking(input));
    



        printf("%d %lli\n",iteration,input);


        iteration = 0;
    }
    
}
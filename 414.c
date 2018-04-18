#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void sort(int int_array[13], int size){

    int i,j, temp;

    for(i=0; i < size; i++){
        for(j = i+ 1; j < size; j++){

            if(int_array[i] < int_array[j]){
                temp = int_array[j];
                int_array[j] = int_array[i];
                int_array[i] = temp; 

            }
        }
    }

}

int main(){

    int N,i,j;
    char image[13][26];
    int value[13];
    char * tempa, *tempb;
    int left_side;
    int right_side; 
    int max, output=0;
    char temp[26];

 
  
    while(scanf("%d",&N), N != 0){


       
        for(i = 0;i < N; i++){
            scanf("%s", temp);
            value[i] = strlen(temp);
            if(value[i] == 25)
                continue;
            scanf("%s", temp);
            value[i] += strlen(temp);
        } 

        sort(value, N);
        max = value[0];

        for(i = 1;i < N; i++){
            output += max - value[i];
        }
        printf("%d\n", output);
        output= 0;
       
    } 
    
    return 0;
}

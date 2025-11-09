#include"my_headers.h"

// this function will  randomly set the default secret_code 
int default_secret_code(int* combinaison)
{  
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        combinaison[i] = 1 + rand() % 8;
 //from line 14 to line 21 we are making sure that the four  random pieces  will be distinct     
        for (int j = 0; j < i; ++j)
        {
            if (combinaison[i] == combinaison[j])
            {
                --i;
                break;
            }
    }
}
 return *combinaison;
}

// here are taking the user guess by reading it from the standard input
char* get_player_code(char* player_code, char* buffer){
    my_putchar('>');
    int i=0;
    do{
        read(0, buffer,1);
        player_code[i]=*buffer;
        i++;
      
    }while(*buffer!='\n');
   player_code[i]='\0';
    return player_code;
}

//the guess_checking function will make sure that the user entered a valid guess
// that means that the pieces are digits less than 9(0 to 8) and those pieces are up to 4

void guess_checking(char* player_code, char* buffer){
    int i=0;
    if(strlen(player_code)==5){
         while(((int)player_code[i]<48||(int)player_code[i]>56)){ 
    printf("Wrong input!\n");
    get_player_code(player_code, buffer);
         i++;
         }
    }
    else{
         printf("Wrong input!\n");
    get_player_code(player_code, buffer);
    }
}
// it will convert the user guess into fours digits
int* code_converter(char *player_code, int *array){
    int code=atoi(player_code);
    int i=3;
    int reminder;
    while(code!=0){
        reminder=code%10;
        array[i]=reminder;
        i--;
        code=code/10;   
    }
    return array;
}

// the following function will count the number of well_placed pieces.
// it will receive the final_code(the combinaison to guess) and the array containing user guess converted into fours digits as parameters 
int wellplaced(int* final_code, int* array){
    int well_placed=0;
    for(int i=0; i<4;i++){
        if(final_code[i]==array[i]){
            well_placed+=1;
       }  
    }
    return well_placed;
}

// the following function will count the number of miss_placed pieces.
// it will receive the final_code(the combinaison to guess) and the array containing user guess converted into fours digits as parameters 
int missplaced(int* final_code,int * array){
      int miss_placed=0;
    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){   
            if(final_code[i]==(array[j]) && (i!=j)){
                 miss_placed+=1;
            }
        }
    }
    return miss_placed;
}

// this function aims to put the > character
int my_putchar(char c) {
  return write(1, &c, 1);
}
// this function will validate the optional arguments
void personnalized_code_checking(char** av, int* final_code, int* combinaison,int k){
    if(strlen(av[k])==4){
            for( int i=0;i<4;i++){
                if(((int)av[k][i]>=48 && (int)av[k][i]<=56)&& av[k][i]!=av[k][i+1]){
                    if(i==3){
                        code_converter(av[k], final_code);
                    }   
                }
                else{
                   * final_code=default_secret_code(combinaison);
                    break;
                } 
            }   
        }
       else *final_code=default_secret_code(combinaison);   
}
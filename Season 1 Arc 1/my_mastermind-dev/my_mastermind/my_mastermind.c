#include"my_headers.h"
int main(int ac, char **av){
    // 5- 14 allocation of memory and intialisation variables
    int* combinaison=(int*) malloc(4*sizeof(int));
    char* player_code=(char*)malloc(5*sizeof(char));
    char* buffer=(char*)malloc(5*sizeof(char));
    int* array=(int*)malloc(4*sizeof(int));
    int* final_code=(int*) malloc(4*sizeof(int));

    int default_attempt=10;
    int round = 0;
    int well_placed, miss_placed;
    
   
    // checking of number of arguments 
    switch (ac) {
    //if there is just one argument: my_mastermind attempts will be up to 10 and the final_code will the random one
    case 1 : *final_code=default_secret_code(combinaison);
    break;
    // if there is "three arguments" if they are valid the right change will be done on the program
    case 3:
        if(strcmp(av[1],"-t")==0){
            if(atoi(av[2])>0){
            default_attempt=atoi(av[2]);
            
        }
        
        }
       else if(strcmp(av[1],"-c")==0){
           
        personnalized_code_checking(av, final_code, combinaison,2);
    
} 
        break;
    //in this case the player have the ability to both set the secret code and the number of attempts 
    case 5:
        
        if(strcmp(av[3],"-t")==0 && strcmp(av[1],"-c")==0){
        if(atoi(av[4])>0){
            default_attempt=atoi(av[4]);

        }
        personnalized_code_checking(av, final_code, combinaison,2);
         
    }
    else if( strcmp(av[3],"-c")==0 && strcmp(av[1],"-t")==0 ){
        if(atoi(av[2])>0){
            default_attempt=atoi(av[2]);

       personnalized_code_checking(av, final_code, combinaison,4);
    }
    }
   break;
    }
        


// welcoming
    printf("Will you find the secret code?\nPlease enter a valid guess\n");
    while(default_attempt>0){
    printf("---\n");
    printf("Round %d\n",round);
   
//guess reading
    get_player_code(player_code, buffer);
//its checking
  guess_checking(player_code, buffer);
// converting to digits for a purpose of comparison
    code_converter(player_code, array);
//counting the number of well and misplaced pieces
    well_placed=wellplaced(final_code,array);
    miss_placed=missplaced(final_code,array);

//displaying them after each attempt 
    printf("Well placed pieces: %d\n",well_placed);
    printf("Misplaced pieces: %d\n",miss_placed);
// case where the player win
    if(well_placed==4){
        printf("Congratz! You did it!\n");
         break;
    }
    
    
   round++;
   default_attempt--;}
// normal end of game
    if(default_attempt==0){
        printf("Game Over!\n");
    }
  free(combinaison);
  free(player_code);
  free(buffer);
  free(array);
  free(final_code);
    return 0;
}
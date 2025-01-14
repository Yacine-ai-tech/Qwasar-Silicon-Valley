#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<string.h>
int default_secret_code(int* combinaison);
char* get_player_code(char* player_code,char* buffer);

void guess_checking(char* player_code, char* buffer);
int* code_converter(char* player_code, int* array);
int wellplaced(int* final_code,int  * array);
int missplaced(int* final_code,int* array);


int my_putchar(char c);
void personnalized_code_checking(char** av,int* final_code,int* combinaison,int k);
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


void my_print_words_array(string_array* param_1)
{
    
    for(char i=0;i<param_1->size;i++){
    write(1,param_1->array[i],strlen(param_1->array[i]));
    write(1,"\n",1);
}

}
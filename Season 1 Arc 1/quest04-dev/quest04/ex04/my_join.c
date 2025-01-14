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


char* my_join(string_array* param_1, char* param_2)
{
    int i,Len1=0,Len2;
    for(i=0;i<param_1->size;i++){
        Len1 += strlen(param_1->array[i]);

    }
    Len2=strlen(param_2);
    char* new= malloc(sizeof(char)*(Len1+Len2));
    if(param_1->size==0)
    return NULL;
    for(i=0;i< param_1->size -1;i++){
        strcat(new, param_1->array[i]);
        strcat(new,param_2);
    }
    strcat(new, param_1->array[param_1->size-1]);
    return new;
   
    
}
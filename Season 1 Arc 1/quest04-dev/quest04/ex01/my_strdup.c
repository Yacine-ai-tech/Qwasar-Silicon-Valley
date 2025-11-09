#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* my_strdup(char* param_1)
{
    char* range = malloc(sizeof(char)*(strlen(param_1)+1));
    for(int i=0; i< strlen(param_1);i++){
        range[i] = param_1[i];
    }
    return range;
}
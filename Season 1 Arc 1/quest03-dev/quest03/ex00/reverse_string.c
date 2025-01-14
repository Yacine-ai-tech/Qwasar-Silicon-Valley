#include<stdio.h>
#include<string.h>
char* reverse_string(char* param_1)
{
    for(int i =0;i < strlen(param_1)/2;i++){
        char var = param_1[i];
        param_1[i] = param_1[strlen(param_1)-i];
        param_1[strlen(param_1)-i] = var;
    }
    return param_1;
}

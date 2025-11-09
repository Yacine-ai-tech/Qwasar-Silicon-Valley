#include<stdio.h>
#include<string.h>

char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    for(int i=0; i< param_3 && i< strlen(param_2); i++){
        param_1[i] = param_2[i];
    }
    return param_1;
}
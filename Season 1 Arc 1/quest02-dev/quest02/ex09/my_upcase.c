#include<stdio.h>
#include<ctype.h>
char* my_upcase(char* param_1)
{
    for( int i=0;param_1[i] !='\0';i++){
        if (param_1[i]>='a' && param_1[i]<='z'){
            param_1[i]=param_1[i]-32;
        }

    }
    return param_1;
}
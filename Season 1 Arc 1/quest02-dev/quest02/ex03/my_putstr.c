#include<stdio.h>
#include<ctype.h>
#include<unistd.h>
int my_putchar(char c) {
  return write(1, &c, 1);
}

void my_putstr(char* param_1)
{
    char *c;
    for(c=param_1;*c!='\0';c++){
        my_putchar(*c);
    }

}
#include<stdio.h>
#include<ctype.h>
#include<unistd.h>
void my_putchar(char c) {
  write(1, &c, 1);
}
void my_print_alphabet()
{
    char c ;
    for(c='a';c<='z';c++){
        my_putchar(c);
        
    }
    my_putchar('\n');
}

    


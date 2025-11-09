#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
// this function calculate the lenght of a string
int my_strlen(char* s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
    }

//put a character
void my_putchar(char c){
    write(1,&c,1);
}
//put a string
void my_putstr(char* s){
    write(1,s,my_strlen(s));
}

// this one is for the %d case . it make the needed conversion and return the number of printed digits
int  print_num(int nbr,int base){
    int len=0;
    if(nbr<0){
        my_putchar('-');
        len++;
        nbr=-nbr;
    }

    if(nbr==0){
        my_putchar('0');
        return 1;
    }

     if(nbr/base){
       len+= print_num(nbr/base,base);  
    }
     my_putchar(nbr%base+'0');   
    return len+1;
}

// this helper function will allow me two reverse a string
void swap(char* str){
    int start = 0;
    int end = my_strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
/* this  function handle the case of % x %u %o
it use some of the predefined function

*/
int convert_unsigned(unsigned int nbr,int base){
    char possibilities[]="0123456789ABCDEFG";
    char buffer[50];
    int i=0;
    while (nbr != 0) {
        buffer[i++] = possibilities[nbr % base];
        nbr /= base;
    }
    buffer[i] = '\0';

    swap(buffer);
     my_putstr(buffer);
     return my_strlen(buffer);
}


/* handle the %p case  
convert it to the appropraite format and return the number of digit -1
it use recursive calls
*/
int my_put_pointer(long nbr){
    char base_rep[]="0123456789abcdefg";
    long num;
    int len=0;
    if(nbr>0){
        num=nbr;
        nbr/=16;
        len+=my_put_pointer(nbr);
        my_putchar(base_rep[num%16]); 
    }
    return len+1;
}
/* here is  my_printf function . it return the total number of characters printed  */
int my_printf(char* restrict format, ...) {
    va_list list;
    
    char* str;
    char ch;
    int val;
    long pointer;
    char* fmt;
    int lenght= 0;
    va_start(list, format);
    
    for(fmt=format;*fmt;fmt++)
        {
        if(*fmt!='%'){
            my_putchar(*fmt);
            lenght++;
            continue;
        }
        switch (*++fmt)
        {
            case 'c':
            ch=va_arg(list,int);
            my_putchar(ch);
            lenght+=1;
            break;
            case 's':
            str=va_arg(list,char*);
            if(str==NULL){
                my_putstr("(null)");
                lenght+=6;
            }
            else{
                my_putstr(str);
            lenght+=my_strlen(str);}
            break;
            case 'd':
            val=va_arg(list,int);
            lenght+=print_num(val,10);
            break;
            case 'o':
            val=va_arg(list,int);
            lenght+=convert_unsigned(val,8);
            break;
            case 'u':
            val=va_arg(list,int);
            lenght+=convert_unsigned(val,10);
            break;
            case 'x':
            val=va_arg(list,int);
            lenght+=convert_unsigned(val,16);
            break;
            case 'p':
            pointer=va_arg(list,long);
            my_putstr("0x");
            lenght+=my_put_pointer(pointer)+1;
            break;
        default:
        my_putchar(*fmt);
        lenght+=1;
            break;
        }   
    }
    va_end(list);
    return lenght;
}

int main(){
    return 0;
}
#include<stdio.h>
#include<stdlib.h>



 int my_square(int c,int l){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(i==0 || i==l-1){
                if(j==0|| j==c-1){
                    printf("o");
                    continue;
                }
                printf("-");
            }
            else if(j==0 || j==c-1){
                printf("|");
            }
            else printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
int main(int ac, char **av){
  if(ac !=3){
        return 0;
    }
    
int x = atoi(av[1]);
int y = atoi(av[2]);
  
my_square(x,y);


}
/*#include<stdio.h>
#include<stdlib.h>
#define maxlen 128
void count_occurence(int*array,char*str){
    int count=0;
    while(str[count]!='\0'){
        if(str[count]!='"'){
            array[(int)str[count]]+=1;
        }
        count+=1;
    }
}
void affich(int*array,int longueur ){
    int index=0;
    while(index<longueur){
        if(array[index]>0){
            printf("%c:%d\n", index,array[index]);
        }
        index+=1;
    }
}


int main(int ac, char**av)

{   int index=1;
    int array[maxlen]={0};
    while(index<ac){
       count_occurence(&array[0],av[index]);
       index+=1;
    }
    affich(&array[0],maxlen);
    return 0;
}*/



#include <stdio.h>
#include <string.h>

void printfrequencyofcharacters(char *s)
{
	int i,j,count=0,n;
	n=strlen(s);
 	int k,imax;
 	char temp;
 	for(k=n-1;k>=1;k--){
 		imax=0;
 		for(i=1;i<=k;i++){
 			if((int)s[imax]< (int)s[i]){
 				imax=i;
			 }
		 }
		 temp = s[k];
		 s[k]=s[imax];
		 s[imax]=temp;
	 }
     
    

    
	
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i] && s[i]!='"')
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	       	      
			printf("%c:%d\n",s[i],count);
 
        }
	   
	   
	   
 	} 
 	  
}

 
int main(int ac, char**av)
{
 
	int i=1;
  
    
	while(i<ac){
		 printfrequencyofcharacters(av[i]);
		 i++;
	}
   
 
	return 0;
 
     
     
}

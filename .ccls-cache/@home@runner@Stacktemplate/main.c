#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Stack.h"

int main(int argc, char **argv) {
   int i,value;
   NodePtr top=NULL;
   
   for(i=1;i<argc;i++){
     if(strcmp(argv[i],"x")==0) {
      value= pop(&top);
        if(value!=0) printf("pop %d\n",value);
        else printf("The stack is empty\n");
     }
     else{
     value=atoi(argv[i]);
     push(&top, value);
     printf("push %d\n",value);
     }
   }

}
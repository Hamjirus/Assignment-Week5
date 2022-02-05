#include <stdio.h>
#include <string.h>

#include "Stack.h"

int main(int argc, char **argv) {
   int i,j,value;
   STACK s;
    s.top=NULL;
    s.size=0;

   for(i=1;i<argc;i++){
   int check = 0;
   for(j=0;j<strlen(argv[i]);j++){
     
     switch(argv[i][j]){
       case '{': 
       case '[': 
        push_s(&s,argv[i][j]);break;

       case '}':
        if(s.top==NULL){
          check = 1;
        }
        else if(s.top->data==123){
          pop_s(&s);
        }
        break;
       case ']':
        if(s.top==NULL){
          check = 1;
        }
        else if(s.top->data==91){
          pop_s(&s);
        }
        break;

      default:
        break;
     }
   }

  if(s.size > 0 || check == 1){
    printf("not match %s\n",argv[i]);
    while(s.size > 0)
    pop_s(&s);
  }
  else if(s.size==0){
    printf("match %s\n",argv[i]);
  }

  }
}
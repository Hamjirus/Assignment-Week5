#include <stdio.h>
#include "Stack.h"

int main(int argc, char **argv) {
   int i;
   Stack s;
   s.top=NULL;
   s.size=0;
   
   for(i=1;i<argc;i++){
     if(strcmp(argv[i],"x")==0) pop(s);
     else push(s, atoi(argv[i]));

   }
   cout<<"Size of stack is "<<s.size<<endl;


   Queue q;
   q.head=NULL;
   q.tail=NULL;
   q.size=0;

 for(i=1;i<argc;i++){
     if(strcmp(argv[i],"x")==0) cout<<dequeue(q)<<endl;
     else enqueue(q, atoi(argv[i]));

   }

   cout<<"Size of queue is "<<q.size<<endl;



} 
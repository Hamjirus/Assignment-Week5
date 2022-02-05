#include <stdlib.h>


typedef struct node{
    int data;
   struct node * nextPtr;
   
}Node;

typedef Node *NodePtr;

struct Stack{
	 NodePtr top;
	 int size;
};
typedef struct Stack STACK;

void push_s(STACK *s, int x){
  Node *new_node=(NodePtr)malloc(sizeof(Node));
  if(new_node){
	  new_node->data=x;
 	  new_node-> nextPtr=s->top;
    s->top=new_node;
    s->size++;
   }
}

int pop_s(STACK *s){
 	   NodePtr t =s->top;
		int value;		
		t=s->top;
    if(t){
		  value=t->data;
	  	s->top=t->nextPtr;
	  	free(t); 			
      s->size--;
	  	return value;
    }
    return 0;
}

void push(NodePtr *top, int x){
  Node *new_node=(NodePtr)malloc(sizeof(Node));
  if(new_node){
	  new_node->data=x;
 	  new_node-> nextPtr=*top;
    *top=new_node;
   }
}


int pop(NodePtr *top){
 	   NodePtr t =*top;
		int value;		
		t=*top;
    if(t){
		  value=t->data;
	  	*top=t->nextPtr;
	  	free(t); 			
	  	return value;
    }
    return 0;
	}



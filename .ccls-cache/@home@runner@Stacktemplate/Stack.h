

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



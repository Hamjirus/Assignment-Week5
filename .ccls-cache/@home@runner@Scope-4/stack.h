#include <iostream>
#include <string.h>
using namespace std;


struct NODE{
    int data;
    NODE * next;
   
};


struct Stack{
  NODE *top;
  int size;
};


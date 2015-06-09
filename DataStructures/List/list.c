// Make everything again
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
}; 

//Function decalaration
int is_empty(struct node*);
struct node* insert_front(struct node*, int a);
int size(struct node*);    

int main() {
  struct node* l1;
  //is_empty(l1);
  insert_front(l1,1);
  //insert_front(l1,2);
  is_empty(l1);      
  return 0;   
}

int is_empty(struct node* start) {
  if(start != 0) {
    printf("list is not empty.\n");
    return 1;
  }
  else {
  printf("list is empty.\n");
  return 0;
  }
}

struct node* insert_front(struct node* start, int x) {
  struct node* new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = x;
  new_node->next = NULL;
  if(start != NULL)
    new_node->next = start;
  return new_node;
}



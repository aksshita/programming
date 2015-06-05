#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;   
  struct node* next; 
};

//Function decalaration
int is_empty(struct node*);
struct node* insert_front(struct node*, int);
int size(struct node*);
void print_list(struct node*);
/*struct node* insert_back()
delete_front()
delete_back()
front()*/

int main() {
  struct node* l1;
  printf("%d\n", size(l1));
  l1 = insert_front(l1, 10);
  printf("%d\n", size(l1));
  l1 = insert_front(l1, 20);
  printf("%d\n", size(l1));
  l1 = insert_front(l1, 30);
  printf("%d\n", size(l1));
  print_list(l1);
  return 0;
}

//Function to check if list is empty list
int is_empty(struct node* l) {  
  if(l == NULL)
    return 0;
  return 1;
}

int size(struct node* l) {
  int s = 0;
  struct node* temp;
  temp = l;   
  while(temp != NULL) {
    s++;
    temp = temp->next;
  }
  return s;
}

struct node* insert_front(struct node* start, int x) {
  struct node* new_node = (struct node*) malloc(sizeof(struct node));  
  new_node->data = x;
  new_node->next = NULL; 
  if(is_empty(start) != 0)      
    new_node->next = start;
  return new_node;
} 

void print_list(struct node* l) {
  struct node* temp;
  temp = l;
  while(temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next; 
  }
  printf("nullllll\n");
  return;
}
  


 

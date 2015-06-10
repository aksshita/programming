// Make everything again
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
struct node* insert_back(struct node*, int);
struct node* delete_front(struct node*);
struct node* delete_back(struct node*);
struct node* return_front(struct node*);

int main() {
  struct node* l1;
  //is_empty(l1);
  l1 = insert_front(l1,1);
  l1 = insert_front(l1,2);
  //print_list(l1);
  //l1 = insert_front(l1,3);
  //l1 = insert_front(l1,5);
  //l1 = insert_front(l1,6);
  //l1 = insert_front(l1,7);
  //is_empty(l1);
  //size(l1);  
  //print_list(l1);   
  //insert_back(l1,4);
  //print_list(l1);
  //l1 = delete_front(l1);
  //print_list(l1);
  l1 = delete_back(l1);
  return 0;   
}

int is_empty(struct node* start) {
  if(start != NULL) {
    //printf("list is not empty.\n");
    return 1;
  }
  else 
    return 0;
}

struct node* insert_front(struct node* start, int x) {
  struct node* new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = x;
  new_node->next = NULL;
  if(is_empty(start) != 0)
    new_node->next = start;
  printf("one element added at front.\n");
  return new_node;
}                    

int size(struct node* start) {      
  int s = 0;
  if(is_empty(start) != 0) {
    while(start != NULL) {
      s++;
      start = start->next;
    }
    printf("size of the list is %d\n", s );
    return s;
  }
}

void print_list(struct node* start) {
  if(is_empty(start) != 0) {
    while(start != NULL) {
      printf("%d->", start->data);
      start = start->next;
    }
  printf("end-of-list\n");
  return;
  }
  else {
    printf("no elements to display.\n");
    return;
  }
return;
}

struct node* insert_back(struct node* start, int y) {
  struct node* new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = y;
  new_node->next = NULL;
  struct node* temp;
  temp = start;
  if(start == NULL) {
    printf("added at end....\n");
    return new_node;
  }
  else {
    while(temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
    printf("one element added at the end of list.\n");
    return start;
  }
  return start;
}

struct node* delete_front(struct node* start) {
  if(is_empty(start) != 0) {
    printf("list before deletion is:\t");
    print_list(start);
    start = start->next;
  }
  printf("list after deletion is:\t");
  print_list(start);
  return start;
}

struct node* delete_back(struct node* start) {
  struct node* temp;
  struct node* prev;
  temp = start;
  prev = temp;
  if(is_empty(start) != 0) {
    printf("list before deletion is:\t");
    print_list(start);
    if(start->next == NULL) {
      printf("after deletion list is empty.\n");
      return start;
    }
    else {
      while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
      }
    prev->next = NULL;
    printf("list after deletion is:\t");
    print_list(start);
    return start;
    }
  }
  else {
    printf("no element found to delete, list is empty.\n");
  }
}



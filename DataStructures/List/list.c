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
struct node* delete_front(struct node*);
struct node* insert_back(struct node*, int);
struct node* delete_back(struct node*);
/*delete_back()
return at front()*/

int main() {
  struct node* l1;
  //printf("%d\n", size(l1));
  l1 = insert_front(l1, 10);
   //print_list(l1);
  //printf("%d\n", size(l1));
  l1 = insert_front(l1, 20);
   //print_list(l1);
  //printf("%d\n", size(l1));
  l1 = insert_front(l1, 30);
  //printf("%d\n", size(l1));
  l1 = insert_front(l1, 30);
  l1 = insert_front(l1, 40);
  l1 = insert_front(l1, 50);
  //l1 = insert_front(l1, 60);
  //l1 = insert_back(l1, 40);
  print_list(l1);
  //l1 = insert_back(l1, 50);
  //print_list(l1);
  //l1 = insert_back(l1, 60);
  //print_list(l1);
  l1 = delete_front(l1);
  l1 = delete_back(l1);
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
  printf("nulllll\n");   
  return;
}

/*struct node* insert_back(struct node* start, int x) {
  struct node* new_node = (struct node*) malloc(sizeof(struct node*));
  new_node->data = x;
  new_node->next = NULL;
  struct node* temp;
  temp = start;
  if(is_empty(start) == 0) 
      return new_node;
  else {
    while (temp != NULL) {
      temp = temp->next;      
      break;
    }
    temp->next = new_node;
    return start;
  }
  return start;
}*/
 
struct node* delete_front (struct node* start) {
  if(is_empty(start) == 0) {
    printf("list is empty!\n");
    return start;
  }
  else {
    //if(start->data == x) {
      printf("list before deletion is:\n");
      print_list(start);
      start = start->next;
      printf("list after deletion is:\n");
      print_list(start);
      return start;
    //}
    /*else {
      printf("data is not avlaible at front, as the given list is:\n");
      print_list(start);
      return start;
    }*/
  }
}

struct node* delete_back(struct node* start) {
  struct node* temp;
  struct node* prev;
  temp = start;
  prev = temp;
  if(is_empty(start) == 0) {
    printf("list is empty!\n");
    return start;
  }
  else {
    printf("list before deletion is:\n");
    print_list(start);
    while(temp != NULL && prev->next != temp) {
      prev = temp;
      temp = temp->next;       
      break;
    }
    if(prev == temp) {    //only one node in list
      start = NULL;
      //free(temp);
      printf("list became empty after deletion.\n");
      return start;
    }
    else {
      prev->next = NULL;
      //free(temp);
      printf("list after deletion is:\n");
      print_list(start);
      return start;
    }
  }
  //return start;         //default
}











/*struct node* delete_anywhere(struct node* start, int x) {
  struct  node* temp = start;
  struct  node* prev = start;
  if(is_empty(start) == 0) {
    printf("list is empty!\n");
    return start;
  }
  else {
    while (temp != NULL){
      if(temp->data == x){
        if(temp == start && temp->next == NULL)  //if start is the only node in list
          return NULL;
        else if(temp->next == NULL) {            // temp is last node and it contains x
          prev->next = NULL;
          return start;
          //free(temp);
        }
        else {
          prev->next = temp->next;
        }
      }
    }
  }
}*/
  













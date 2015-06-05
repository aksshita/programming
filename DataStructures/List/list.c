// I added a comment -- Jasmeet

#include <stdio.h>
#include <stdlib.h>

typedef struct node *ptr;  
struct node{
	int data;
	ptr next; 
};
 typedef ptr list;  
 typedef ptr pos;  

 			/*Function decalaration*/
 void is_empty(list);
 void is_last(pos,list);
 pos find(int,list);
 void delete(int,list);
 void insert(int,pos,list);

int main()
{
	list l1;
	is_empty(l1);
	return 0;
}

/*Function to check if list is empty list*/
 void is_empty(list L)
 {  
 	if(L->next == NULL)
 		printf("list is empty\n");
 }

 /*Function to test if given position is the last position of list*/
 void is_last(pos p,list L)			
 {     
 	if(p->next == NULL);
 	printf("given position is last position of the list\n");
 }
 
 /*Function to find given element in the list*/
 pos find(int x, list L)
 {    
 	if(L->next == NULL)
 		printf("the list is empty..\n");
 	pos p;
 	p= L->next;
 	while(p->next != NULL)			//??when I have matching data in last node this fails.
 	{  
 		if(p->data == x)
 			return(p);
 		else
 			p=p->next;
 	}
 	
 	if(p->data==x) // && p->next ==NULL) //??when I have matching data in last node this will satisfy.
 		return(p);
 }

/*Function to delete a given element*/
void delete(int x, list L)
{
	//checking if the list is empty
	if(L->next== NULL) 
	{ 
		printf ("the list is empty"); 
		exit(0);		// ?? is it correct usage of Exit? I want to come out of function after printing this message.
	}
	
	pos temp;
	pos prev;
	temp=L->next;
	prev= L;
	
	//if element to be deleted is the first and only element in list
	if(temp->data== x && temp->next ==NULL)
	{
		L->next =NULL;
		exit(0);
	}
	while(temp->next != NULL)
	{
		if(temp->data ==x && prev->next == temp)
		{
			prev= temp->next;
			free(temp);
		}
		else
		{
			prev= prev->next;
			temp= temp->next;
		}
	}
}

/*Function to insert an element at given position*/
void insert(int x, pos p, list L)
{
	pos new_node =  (pos) malloc(sizeof(struct node));
	if(new_node ==NULL)
		printf("out of space....\n");
	else
	{
		new_node->data = x;
		if(L->next == NULL)				//when list is empty
		{   
			new_node->next = NULL;     
			L->next = new_node;
		}
		else if(p->next==NULL)			//when p is the last node
		{        
			p->next = new_node;
			new_node->next =NULL;
		}
		else{							//for rest of the cases
				new_node->next = p->next;
				p->next= new_node;
			}
		}
}
 

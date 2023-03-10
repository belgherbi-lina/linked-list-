#include<stdio.h>
#include<stdlib.h>
// create a linked list
typedef struct Node {
	int data ;
	struct Node *next ;
}node;  

int main () 
{
	node *head = (node *) malloc(sizeof(node));
	printf ("enter data:");
	scanf("%d",&head->data);
	head->next=NULL;
	
	node *p = (node *) malloc(sizeof(node));
	printf ("enter data:");
	scanf("%d",&p->data);
	p->next=NULL;	
	head->next=p;
	node *p2=(node *) malloc(sizeof(node));
	printf ("enter data:");
	scanf("%d",&p2->data);
	p2->next=NULL;	
	p->next=p2;
}
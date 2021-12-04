#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
}*head=NULL;
void traverse(struct node* t)

	{if (t){printf("%d->",t->data);
	traverse(t->link);}}
int insertatbegin(int i)
{
	if(head==NULL)
	{
		struct node* n=(struct node*)malloc(sizeof(struct node));
		head=n;n->link=NULL;n->data=i;
		}
	else{
		struct node* n=(struct node*)malloc(sizeof(struct node));
		n->link=head;
		head=n;
		n->data=i;
	}
	struct node* t=head;
	traverse(t);
			
}
int main()
{
	int data;
	while(1){
	printf("Enter data to insert");
	scanf("%d",&data);
	insertatbegin(data);}
}

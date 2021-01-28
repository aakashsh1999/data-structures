#include<stdio.h>
#include<stdlib.h>
void traverse(struct node *);
struct node{
    int data;
    struct node *next;
};
int main()
{
    //Creating the pointers for the lists
    struct node *head, *second, *third, *fourth;
    //Dynamically Allocating the Memory in the Heap
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    //link first and second node
    head->data=75;
    head->next=second;
    //Link second and third node
    second->data=856;
    second->next=third;

    //Link third and Fourth node
    third->next=fourth;
    third->data=751;
    //Linking the last node
    fourth->data=545;
    fourth->next=NULL;
    traverse(head);
    return 0;
}
void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
	printf("The element is %d \n",ptr->data);
	ptr=ptr->next;
    }
}
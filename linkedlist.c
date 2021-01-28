//Program to illustrate the Singly Linked List

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * insertAtBegin(struct node *, int);
struct node * insertAtEnd(struct node *, int);
struct node * insertAtIndex(struct node *, int, int);
struct node * insertAtNode(struct node *,struct node *, int data);
void traverse(struct node *);

int main(){
    //Creating the List pointers
    struct node *head, *second, *third, *fourth;        
    //Allocating the Memory in the Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third  = (struct node *)malloc(sizeof(struct node));
    fourth  = (struct node *)malloc(sizeof(struct node));

    //Linking the head and second 
    head->data=45;
    head->next=second;

    //Linking the second and third
    second->data=55;
    second->next=third;

    //Linking the third and fourth
    third->data=65;
    third->next=fourth;

    //Linking the fourth and null
    fourth->data=33;
    fourth->next=NULL;

    //Printing all Element using Traversal Function
    traverse(head);
    printf("\n");
    //InsertAtBeginning
    insertAtBegin(head, 521);
    //Printing all Element After insertion At first
    traverse(head);
    return 0;
}
void traverse(struct node *ptr)
{
 
    while(ptr != NULL)
    {
        printf("The Element is %d \n",ptr->data);
        ptr = ptr->next;
 
    }
   
}
struct node * insertAtBegin(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    head=ptr;
    ptr=head;
    return head;
}
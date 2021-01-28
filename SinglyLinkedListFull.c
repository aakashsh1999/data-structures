#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void create(struct node *);
void traverse(struct node *);
int main()
{

    struct node *head=(struct node *)malloc(sizeof(struct node));
    //Creating the Linked List
    create(head);
    //Traversing the Linked List
    traverse(head);
 
}
void create(struct node *head)
{
    printf("Enter the Element");
    scanf("%d", head->data);
    if(head->next =-1)
    {
        head->next=NULL;
    }
    else 
    {
                    
        head->next=(struct node *)malloc(sizeof(struct node));
        create(head->next);
    }

}
void traverse(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("The Element is %d\n", ptr->data);
        ptr=ptr->next;
    }
}
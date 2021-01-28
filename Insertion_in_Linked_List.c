#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversing(struct node *);
void beginInsert();
int main()
{   //Creating the Address of the Linked List
    struct node *head, *first, *second, *third, *fourth, *fifth, *newNode;
    //Dynamically Allocating the memory
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    newNode=(struct node *)malloc(sizeof(struct node));
    //Linking the first and Second List
    printf("Enter the first Element");
    scanf("%d", head->data);
    head->next=first;
    //Linking the second and third Element
    printf("Enter the Second Element");
    scanf("%d", first->data);
    first->next=second;  
    //Linking the third and fourth Element
    printf("Enter the third Element");
    scanf("%d", second->data);
    second->next=third;
    //Linking the fourth and Fifth Element
    printf("Enter the fourth Element");
    scanf("%d", third->data);
    third->next=fourth;
    //Linking the Fifth and Null Elemnt
    printf("Enter the fifth Element");
    scanf("%d", fourth->data);
    fourth->next=fifth;
    //Linking the Fifth and Null Elemnt
    printf("Enter the Last Element");
    scanf("%d", fifth->data);
    fifth->next=NULL;
    traversing(head);
    beginInsert(head);

   return 0;
}
void traversing(struct node *ptr){
    while(ptr!=NULL) {
        printf("The element %d",ptr->data);
        ptr=ptr->next;
    }
}

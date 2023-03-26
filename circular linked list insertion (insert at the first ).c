#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node * head)
{


    struct Node *ptr = head;
    do
    {
        printf("element is %d \n ", ptr->data);
        ptr =ptr -> next ;
    }
    while (ptr != head  );
}
struct Node * insertathefhirst (struct Node *head ,int data)
{
    struct Node *ptr =(struct Node *)malloc (sizeof (struct Node));
    ptr ->data =data ;
    struct Node *p =head ->next ;
    while (p->next !=head )
    {
        p=p->next;
    }
    p->next =ptr ;
ptr ->next =head ;
head = ptr ;
return head ;
};
int main ()
{
    struct Node *head ;
    struct Node * second;
    struct Node *third;
    struct Node * fourth;

//allocate memory for Node in the linked list in heap
    head =(struct Node *)malloc(sizeof (struct Node));
    second = (struct Node *)malloc(sizeof (struct Node));
    third = (struct Node* ) malloc (sizeof(struct Node ));
    fourth = (struct Node *) malloc (sizeof (struct Node));
    // linked first & second nodes
    head -> data = 67;
    head -> next = second ;
    //linked second & third nodes
    second -> data = 87;
    second -> next = third;
    //linked third & fourth nodes
    third -> data=76;
    third -> next = fourth;
    //terminate the list at the third node
    fourth -> data = 90;
    fourth -> next = head;
    printf("circular linked list before insertion\n\n");
    LinkedListTraversal(head);
  head =  insertathefhirst (head , 10);
  printf("\n\n cercular linked list after insertion \n");
      LinkedListTraversal(head);

    return 0;
}

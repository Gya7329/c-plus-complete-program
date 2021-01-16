#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node * next;

}stdnode;

void createlist(int n);
void display();
int main()
{
    int n;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		printf("Enter no of nodes:- ");
		scanf("%d",&n);
		createlist(n);
		printf("\n Data linked list : ");
		display();
		return 0;


}
void createlist(int n)
{
    struct Node *firstnode , *temp;
    int num,i;
   stdnode = (struct Node *) malloc(sizeof(struct Node));
    if(stdnode==NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("enter data for node 1: ");
        scanf("%d",&num);
        stdnode->num=num;
        stdnode->next=NULL;
        temp=stdnode;

    }
    for(i=2;i<n;i++)
    {
        firstnode=(struct *Node)malloc(sizeof(struct Node));
        if(firstnode==NUlL)
        {
            printf("Memory can not allocate:-");
            break;

        }
       else
       {
           printf("Input data for %d: ",i);
           scanf("%d",&num);

           firstnode->num=num;
           firstnode->next=NULL;

           temp->next=firstnode;
           temp=temp->next;

       }

       }
    }
}
void display()
{
    struct Node *temp;
    if(stdnode==NULL)
    {
      printf("Empty:-");
    }
    else{
            temp=stdnode;
    while(temp!=0)
    {


    printf(" Data = %d\n", temp->num);       // prints the data of current node
            temp = temp->next;

    }

    }


}

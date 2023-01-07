#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next =NULL;
    }

};

void insertNodeatHead(Node* &head,int d)
{
   //New node creation
   Node* temp = new Node(d);

   temp->next =head;
   head= temp;
};

void insertNodeatTail(Node* &tail,int d)
{
   //New node creation
   Node* temp = new Node(d);

   tail->next =temp;
   tail =tail->next; // or tail=temp;
};

void insertNodeinBetween(Node* &head,Node* &tail,int position,int d)
{

//Insert at start case
    if(position==1)
    {
        insertNodeatHead(head,d);
        return;
    }

   //New node creation
   Node* temp = head;
   int cnt=1;

   while(cnt<position-1)
   {
    temp=temp->next;
    cnt++;
   }

   Node* node_to_insert = new Node(d);

    if(temp->next == NULL)
  {
    insertNodeatTail(tail,d);
    return;
  }
  

 node_to_insert->next = temp->next;
temp->next = node_to_insert ;

 
};


void print_or_traverse_alinkedlist(Node* &head){
          
    Node* temp= head;

  while(temp!=NULL)
  {
    cout << temp->data <<" ";
    temp = temp->next;
  }
  cout<<endl;
};

int main()
{
    Node* node1 = new Node(10);

   /*  cout<<node1->data <<endl;
    cout<<node1->next <<endl; */

    Node* head= node1;
    Node* tail =node1;

print_or_traverse_alinkedlist(head);

insertNodeatHead(head,12);

insertNodeatHead(head,5);

insertNodeatHead(head,6);
print_or_traverse_alinkedlist(head);


insertNodeatTail(tail,50);
insertNodeatTail(tail,70);
print_or_traverse_alinkedlist(head);


insertNodeinBetween(head,tail,3,456);
print_or_traverse_alinkedlist(head);


//insert at start
insertNodeinBetween(head,tail,1,600);
print_or_traverse_alinkedlist(head);

//insert at end by insertatbetweenmethod
insertNodeinBetween(head,tail,9,1111);
print_or_traverse_alinkedlist(head);

//insert at end by orginal tail method
insertNodeatTail(tail,89);
print_or_traverse_alinkedlist(head);
    
}
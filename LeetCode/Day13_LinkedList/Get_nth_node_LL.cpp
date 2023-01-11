//Write a GetNth() function that takes a linked list and an integer index 
//and returns the data value stored in the node at that index position. 

// Input:  1->10->30->14,  index = 2
// Output: 30  
// The node at index 2 is 30

#include<iostream>
using namespace std;

class Node
{
 public:
 int data;
 Node* next;

Node(int d){
 this->data = d;
 this->next =NULL;
}

};

// Insert Node at head
void insertathead(Node* &head,Node* &tail,int d){

    Node* temp =new Node(d);

    if(head==NULL)
    {
        head = temp;
        tail=temp;
    }
    else{
        cout <<"Inserting element " << temp->data << endl;
        temp->next=head;
        head=temp;
    }

};

void printortraverseaLL(Node* &head)
{

    if(head==NULL)
    {
        cout << "Linked List is empty" <<endl;
    }
    else{
          Node* temp = head;
        cout<< " "<<endl;
        cout <<"Linked List is" << endl;
        while(temp!=NULL)
        {       
        cout << temp->data << " " ;
        temp=temp->next;
        }
        cout << endl;
    }

};

int GetNth(Node *head,int idx)
{
    Node* temp= head;

    int cnt=0;
    while(cnt<idx)
    {
        temp=temp->next;
        cnt++;
    }

    return temp->data;
};

int main()
{

    Node* head=new Node(14);
    Node* tail=NULL;

    insertathead(head,tail,30);
    insertathead(head,tail,10);
    insertathead(head,tail,1);

    printortraverseaLL(head);

   int res= GetNth (head,2);
   cout <<"Result is " << res <<endl;

    
};
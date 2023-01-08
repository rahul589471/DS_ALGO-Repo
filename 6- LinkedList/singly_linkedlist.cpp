#include<iostream>
using namespace std;

class Node{
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

//Insert Node at tail
void insertattail(Node* &tail,Node*head, int d)
{
    Node* temp =new Node(d);

    if(tail==NULL)
    {
        tail=temp;
        head=temp;
    }
    else{
        tail->next=temp;
        tail= temp;
    }
   
};

//insert Node in between
void insertatanyposition(Node* &head,Node* &tail,int position,int data)
{
  if(head==NULL || position==1)
  {
    insertathead(head,tail,data);
    return;
  }
  else{
    Node* temp = head;

    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }

    Node* nodetoinsert =new Node(data);

     if(temp->next==NULL)
    {
        tail=nodetoinsert;
    }

    nodetoinsert->next =temp->next;
    temp->next=nodetoinsert;

   
  }
};

//delete a node
void delanode(Node* &head, Node* &tail,int position)
{
    Node* temp= head;

 if(position ==1)
 {
    temp=temp->next;
    head=temp;
 }
 else{
    
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    temp->next =temp->next->next;
    if(temp->next==NULL)
    {
        tail=temp;
    }
 }
};

//Traverse a LL
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


int main()
{
Node* head=NULL;
Node* tail=NULL;

//Initially LL is empty //Print a LL
printortraverseaLL(head); //LL is empty

insertathead(head,tail,5);
cout <<"head is "<< head->data <<endl;


//Print a LL . Now LL is not empty, so passing head onwards to it
printortraverseaLL(head); //LL is not empty

//Inserting more elements in LL
cout<<"head now is " <<head->data <<endl;



 insertathead(head,tail,10);
 insertathead(head,tail,20);
 insertathead(head,tail,11);
 insertathead(head,tail,55);
 insertathead(head,tail,89);

 cout<<"after inserting elements, Head now is  " <<head->data <<endl;


 //Now Printing a LL
 printortraverseaLL(head); 

 //Now Insert elements at tail
insertattail(tail,head,1);
insertattail(tail,head,2);
insertattail(tail,head,3);
insertattail(tail,head,4);
insertattail(tail,head,5);


 //Now Printing a LL
 printortraverseaLL(head); 


 //Now Insert elements in between
insertatanyposition(head,tail,3,67);

insertatanyposition(head,tail,1,4);

insertatanyposition(head,tail,14,99);



 //Now Printing a LL
 printortraverseaLL(head); 

//Now, delete any node
delanode(head,tail,5);
 printortraverseaLL(head); 

//deleting head
delanode(head,tail,1);
 printortraverseaLL(head); 

//deleting tail
delanode(head,tail,12);

cout << "head is " <<head->data <<endl;
cout << "tail is " <<tail->data <<endl;

  //Now Printing a LL
 printortraverseaLL(head); 

}

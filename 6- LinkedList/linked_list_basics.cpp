#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;

    Node(int data)

    {
        this->data = data;
        this ->next =NULL;
    }
};

int main()
{
    cout<< "hello" <<endl;

    Node* node1 = new Node(102);
    cout << node1 <<endl;


     cout << node1->data <<endl;
     cout << node1->next <<endl;

}
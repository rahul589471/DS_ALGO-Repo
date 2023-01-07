#include <iostream>
using namespace std;

int main() 
{
/* int a=4;
cout <<"value of a is " << a<<endl;
cout <<"Address of a is " << &a <<endl;


int *p =&a;
cout <<"value of Pointer is "  <<p<<endl;
cout <<"value at pointer address is " <<*p<<endl; */


int num[] ={15,6,7,8};

cout << num[0]<<endl;
cout << num<<endl;
cout << &num<<endl;

// int *r =&num;  -- Doesn't work

int *p =num;
int *q = (&num[0]);

cout <<"......." <<endl;
cout << p <<endl;
cout << *p <<endl;
cout <<"......." <<endl;
cout << q <<endl;
cout << *q <<endl;

// cout << arr+1 <<endl; --Doesn't work
cout << p+1 <<endl;
cout << (*p+1) <<endl;
cout << *(p+1) <<endl;

}
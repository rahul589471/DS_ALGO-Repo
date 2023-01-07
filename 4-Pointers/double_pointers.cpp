#include <iostream>
using namespace std;

void update_pointer(int* p)
{
 p =p+1;
}

void update_values(int** p2)
{
   cout <<"inside function" <<endl;
   // Will it change - NO
   //p2 =p2+1;

   // Will it change - Yes
  // *p2 =*p2+1;

   // Will it change - 
   **p2 =**p2+1;
      cout <<"exit from function" <<endl;
}

int main() 
{

int first=100;
 int* p1 =&first;
int **q= &p1;

int *r=*q;


cout << first <<endl;
cout << p1<<endl;
cout << q<<endl;
cout << *p1<<endl;
cout << *q<<endl;
cout <<**q<<endl;

cout <<r <<endl;

 int num =5;
 int* p = &num;
 int** p2 = &p;

cout << "before values are.................." <<endl;
cout << num <<endl;
cout << p <<endl;
cout << p2 <<endl;

update_values(p2);

cout << "after values are.................." <<endl;
cout << num <<endl;
cout << p <<endl;
cout << p2 <<endl;

}

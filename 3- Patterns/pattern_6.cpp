#include<iostream>
using namespace std;

int main(){

 
  cout<< "Enter a number " <<endl;
  int n;
  cin>>n;

  int i =1;


  while(i <=n)
    {
        int p =i;
        int j=1;
      while (j<=i) {
         cout << p;
        cout << " ";
        j=j+1;
        p =p +1;
      }
      cout<<endl;
      i =i+1;
    }

}
#include<iostream>
using namespace std;

int main(){

 
  cout<< "Enter a number " <<endl;
  int n;
  cin>>n;

  int i =1;
  int p =1;

  while(i <=n)
    {
        int j=1;
      while (j<=n) {
         cout << p;
        j=j+1;
        p =p+1;
      }
      cout<<endl;
      i =i+1;
    }

}
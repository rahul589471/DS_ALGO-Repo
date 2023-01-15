#include<iostream>
using namespace std;

int main(){

 
  cout<< "Enter a number " <<endl;
  int n;
  cin>>n;

  int i =1;

  while(i <=n)
    {
        int j=1;
        int t =1;
      while(t<=n-i)
        {ac
          cout<< ' ';
          t=t+1;
        }

      while (j<=i+i-1) {
        cout << '*';
        j=j+1;
      }
      
      cout<<endl;
      i =i+1;
    }

}
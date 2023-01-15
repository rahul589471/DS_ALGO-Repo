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
        int t =1;
      while(t<=n-i)
        {
          cout<< ' ';
          t=t+1;
        }


      if (i==1 || i%2==0) {
        while (j<=i+i-1) {
        cout << p;
        j=j+1;
        p=p+1;
      }
        }
      else
      {
        int x=0;
        while (j<=i+i-1) {
        cout << p+i+i-2-x;
        j=j+1;
        p=p+1;
        x=x+2;
      }
        
      }
      
      cout<<endl;
      i =i+1;
    }

}
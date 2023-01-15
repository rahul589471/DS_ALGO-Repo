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
        {
          cout<< ' ';
          t=t+1;
        }
      
       char ch='*';
      while (j<=i+i-1) {
        cout << ch;
        j=j+1;
        if (j%2==0){
          ch ='+';
        }
        else
        {ch ='*';
          }
        
      }
      
      cout<<endl;
      i =i+1;
    }

}
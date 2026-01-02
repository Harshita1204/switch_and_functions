#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int n;
  cout<<"Enter the amount :";
  cin>>n;
  int choice=1;
  switch(choice){
      case 1:
      cout<<"100 rs notes are: "<<n/100<<endl;
      n=n%100;
      case 2:
      cout<<"50 rs notes are: "<<n/50<<endl;
      n=n%50;
      case 3:
      cout<<"20 rs notes are: "<<n/20<<endl;
      n=n%20;
      case 4:
      cout<<"10 rs notes are: "<<n/10<<endl;
      n=n%10;
      break;
  }
    return 0;
}

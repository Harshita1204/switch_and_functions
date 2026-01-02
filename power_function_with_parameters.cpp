#include <iostream>
#include <cstdlib>
using namespace std;
// return type , function name (arguments/ parameters)
int power(int num1, int num2){
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }
    return ans;
}
int main() {
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a;
    cin>>b;
    int answer=power(a,b);
    cout<<"Answer is: "<<answer<<endl;
    
  int c,d;
  cout<<"Enter the value of c and d:"<<endl;
  cin>>c;
  cin>>d;
  int ans=power(c,d);
  cout<<"Answer is: "<<ans<<endl;
  return 0;
}

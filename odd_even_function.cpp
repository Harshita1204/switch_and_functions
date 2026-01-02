#include <iostream>
#include <cstdlib>
using namespace std;
// 1 -> odd
// 0 -> even
bool isEven(int a){
    //odd
    if(a&1){    // for ex: 5 = 101 , 1= 001 , 5 & 1 = 001 which is odd     
        return 0;
    }
    else{    // for ex: 8 = 1000 , 1 = 0001 , 8 & 1 = 0000 which is even
        return 1;
    }
}
int main(){
    int num;
    cout<<"Enter num value: ";
    cin>>num;
    if(isEven(num)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}

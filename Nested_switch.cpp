#include <iostream>
using namespace std;
int main() {
    char ch='1';
    int num= 1;
    cout<<endl;
    switch(ch){
        case 1:
        cout<<"First case"<<endl;
        break;
        case '1': switch(num){  // nested switch : inside case'1' -> num is checked which is 1 and then the cout statement is executed !
            case 1: 
            cout<<"value of num is: "<<num<<endl;
        }
        break;
        default:
        cout<<"This is default case"<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int num= 2;
    cout<<endl;
    switch(num){
        case 1:
        cout<<"First case"<<endl;
        break;
        case 2:
        cout<<"Second case"<<endl; // num= 2 , matched with case 2 so second case is printed
        break;
        default:
        cout<<"This is default case"<<endl;
    }
    return 0;
}

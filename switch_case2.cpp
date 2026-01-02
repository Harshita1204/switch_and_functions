#include <iostream>
using namespace std;
int main() {
    char ch='1';
  // char ch= 'a';   as this doesnt match with any case , default case will be printed , if there is no default case then nothing will be printed , default case is not mandatory!
    cout<<endl;
    switch(ch){
        case 1:
        cout<<"First case"<<endl;
        break;
        case '1':
        cout<<"Second case"<<endl; // num= 2 , matched with case '1' so second case is printed
        break;
        default:
        cout<<"This is default case"<<endl;
    }
    return 0;
}

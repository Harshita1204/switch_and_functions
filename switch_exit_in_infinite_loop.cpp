#include <iostream>
#include <cstdlib> // used for exit()
using namespace std;
int main() {
   int choice;
   while(true){
       cout<<"Enter your choice"<<endl; // this loop will work until the loop breaks that will be if the choice 2 is chosen because it contains the exit() function which breaks it out of the loop!
       cin>>choice;
       switch(choice){
           case 1:
           cout<<"switch case 1 "<<endl;
           break;
           case 2:
           cout<<"Program terminated using exit()"<<endl;
           exit(0);
           default:
           cout<<"Invalid choice";
       }
   }
    return 0;
}

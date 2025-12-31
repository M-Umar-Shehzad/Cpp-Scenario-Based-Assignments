#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number between 1 and 7 to show the corresponding day of the week: "; cin>>x;

    while (x<1 or x>7)
    {
        cout<<"Please enter a Number Between 1-7 : ";cin>>x;
    }

    switch (x){
        case (1):
            cout<<"Monday";break;
        case (2):
            cout<<"Tuesday";break;
        case(3):
            cout<<"Wednesday";break;
        case(4):
            cout<<"Thursday";break;
        case(5):
            cout<<"Friday";break;
        case(6):
            cout<<"Saturday";break;
        case(7):
            cout<<"Sunday";break;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    float r; int x;
    cout<<"Enter radius of the Circle : ";cin>>r;

    cout<<"\n\nPress 1 To Calculate Circumference Of Circle";
    cout<<"\nPress 2 to Exit";
    cout<<"\nSelected Input : "; cin>>x;

    while(x!=1 and x!=2)
    {
        cout<<"Invalid input... Please Press 1 or 2 : "; cin>>x;
    }

    switch(x)
    {
        case 1:
            {
                cout<<"\n\nThe Circumference Of The Circle Is : "<< 2*3.14*r;
                break;
            }
        case 2:
            {
                cout<<"\n\nYou Have Exited";
                break;
            }
    }
    return 0;
}
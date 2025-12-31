#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter The Employee's salary : ";cin>>x;

    cout<<"\nPress 1 To Apply 12% Increment on The Employee's salary";
    cout<<"\n\nPress 2 to Cancel";
    cout<<"\n\nInput Selected : ";cin>>y;

    while(y!=1 and y!=2)
    {
        cout<<"\n\nInavlid Input... Press 1 or 2 : ";
        cin>>y;
    }

    switch(y)
    {
        case 1:
            {
                cout<<"\n\nThe Employee's salary after apply 12% increment is : "<<x*1.12;
                break;
            }
        case 2:
            {
                cout<<"\n\nYou have Canceled the increment";
                break;
            }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    char degree =248;
    cout<<"Enter the Temperature of the Refrigerator : ";cin>>x;

    while(x>50 or x<-50)
    {
        cout<<"\nInvalid Temperature...Please Enter a Valid Temperature : ";cin>>x;
    }

    if (x<5 and x>-50)
    {
        y=1;
    }
    else if (x==5)
    {
        y=2;
    }
    else
    {
        y=3;
    }

    switch(y)
    {
        case 1:
            {
                cout<<"\nThe Temperature You Entered Is below 5"<<degree<<"C";
                break;
            }
        case 2:
            {
                cout<<"\nThe Temperature You Entered Is Equal to 5"<<degree<<"C";
                break;
            }
        case 3:
            {
                cout<<"\nThe Temperature You Entered Is above 5"<<degree<<"C";
                break;
            }
    }
    return 0;
}
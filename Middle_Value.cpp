#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the First Number : ";cin>>a;
    cout<<"Enter the Second Number : ";cin>>b;
    cout<<"Enter the Third Number : ";cin>>c;

    if(a>b)
    {
        if(a<c)
        {
            cout<<a<<" is the Middle Value";
        }
        else
        {
            if(b>c)
            {
                 cout<<b<<" is the Middle Value";
            }
            else
            {
                 cout<<c<<" is the Middle Value";
            }
        }
    }
    else
    {
        if(b<c)
        {
            cout<<b<<" is the Middle Value";
        }
        else
        {
          
            if(a>c)
            {
                cout<<a<<" is the Middle Value";
            }
            else
            {
                cout<<c<<" is the Middle Value";
            }
        }
    }
    return 0;
}
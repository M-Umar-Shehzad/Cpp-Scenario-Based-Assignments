#include <iostream>
using namespace std;

int main()
{
    int age,y;
    cout<<"Enter Your Age : ";
    cin>>age;

    while(age<1)
    {
        cout<<"Invalid Age... Please Enter The Correct Age : ";cin>>age;
    }
    if(age<12)
    {
        y=1;
    }
    else if(age>=12 and age<=59)
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
                    
                cout<<"\nYou are a Child and the Ticket Price for You is 300 Rs";
                break;
            }
        case 2:
            {
                    
                cout<<"\nYou are an Adult and the Ticket Price for You is 500 Rs";
                break;
            }
        case 3:
            {
                
                cout<<"\nYou are a Senior and the Ticket Price for You is 350 Rs";
                break;
            }
    }
    return 0;
}
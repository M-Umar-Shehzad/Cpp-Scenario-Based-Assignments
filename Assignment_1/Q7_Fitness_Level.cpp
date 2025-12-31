#include <iostream>
using namespace std;

int main()
{
    int age, weight, level;
    cout<<"Enter Your age : "; cin>>age;

    while(age<1)
    {
        cout<<"Invalid Age...Please Enter Your Correct Age : ";cin>>age;
    }

    cout<<"Enter Your weight : "; cin>>weight;
    while(weight<1)
    {
        cout<<"Invalid Weight...Please Enter Your Correct Weight : ";cin>>weight;
    }

    cout<<"\n---Select Your Fitness level---";
    cout<<"\n\nPress 1 If you have Excellent Fitness Level";
    cout<<"\nPress 2 If you have Good Fitness Level";
    cout<<"\nPress 3 If you have Average Fitness Level";
    cout<<"\nPress 4 If you have Poor Fitness Level";
    cout<<"\n\nNumber Selected : ";cin>>level;

    while(level!=1 and level!=2 and level!=3 and level!=4)
    {
        cout<<"Error...Please Press The Correct Button : ";cin>>level;
    }

    switch(level){
        case 1:
            {
                
                cout<<"\n\nYour Fitness Level Is 'Excellent'";
                break;
            }
        case 2:
            {
                cout<<"\n\nYour Fitness Level Is 'Good'";
                break;
            }
        case 3:
            {
                cout<<"\n\nYour Fitness Level Is 'Average'";
                break;
            }
        case 4:
            {
                cout<<"\n\nYour Fitness Level Is 'Poor'";
                break;
            }
    }

    return 0;
}
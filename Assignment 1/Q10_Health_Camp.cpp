#include <iostream>
using namespace std;

int main()
{
    int age,weight,x;

    cout<<"Enter Your Age : "; cin>>age;
    while(age<1)
    {
        cout<<"Invalid Age...Enter Your Correct Age";cin>>age;
    }
    cout<<"Enter Your Weight : "; cin>>weight;
    while(weight<1)
    {
        cout<<"Invalid Weight...Enter Your Correct Weight";cin>>weight;
    }

    if(age>=18 and age <= 55 and weight >=45)
    {
        x=1;
    }
    else if((age<18 or age>55) and weight >= 45)
    {
        x=2;
    }
    else if((age>=18 and age<=55) and weight < 45)
    {
        x=3;
    }
    else
    {
        x=4;
    }

    switch(x)
    {
        case 1:
        {
            cout<<"You are eligible for Health Camp";
            break;
        }
        case 2:
        {
            cout<<"Your Age doesn't meet the requirements";
            break;
        }
        case 3:
        {
            cout<<"Your Weight doesn't meet the requirements";
            break;
        }
        case 4:
        {
            cout<<"Both your Age and Weight don't meet the requirements";
            break;
        }
    }
    return 0;
}
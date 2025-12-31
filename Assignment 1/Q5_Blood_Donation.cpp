#include <iostream>
using namespace std;

int main()
{
    int age,temp,weight;
    char degree=248;

    cout<<"Enter Your age : ";cin>>age;

    while(age<0)
    {
        cout<<"Invalid Age... Please Enter Your Correct Age : ";cin>>age;
    }

    cout<<"Enter Your weight : ";cin>>weight;

    while(weight<0)
    {
        cout<<"Invalid Weight... Please Enter Your Correct Weight : ";cin>>weight;
    }

    if(age>=18 and weight >=50)
    {
        char ch;
        cout<<"\nHave You Checked Your Temperature?";
        cout<<"\nPress Y for yes and N for No";
        cout<<"\nAnswer Selected : ";cin>>ch;

        while(ch!='y' and ch!='Y' and ch!='n' and ch!='N')
        {
            cout<<"Invalid Input... Please Press Y or N : ";cin>>ch;
        }
        if(ch == 'Y' or ch =='y')
        {
            cout<<"\n\nPress 1 If Your Temperature was below 35"<<degree<<"C";
            cout<<"\nPress 2 If Your Temperature was Between 35"<<degree<<"C and 37"<<degree<<"C";
            cout<<"\nPress 3 If Your Temperature was above 37"<<degree<<"C";
            cout<<"\n\nAnswer Selected : ";cin>>temp;

            while(temp!=1 and temp!=2 and temp!=3)
            {
                cout<<"\nInvalid Input... Please Press 1 , 2 or 3 : ";cin>>temp;
            }

            switch (temp)
            {
                case 1:
                {
                    cout<<"\n\nYour Body Temperature is Below 35"<<degree<<"C which might lead to Hypothermia";
                    break;
                }
                case 2:
                {
                    cout<<"\n\nYour Temperature is Between 35"<<degree<<"C and 37"<<degree<<"C which is Normal Body Temperature";
                    break;
                }
                case 3:
                {
                    cout<<"\n\nYour Body Temperature is above 37"<<degree<<"C which is why you have a Fever";
                    break;
                }
            }
        }
        else
        {
            cout<<"\n\nPlease Check Your Temperature First!";
        }

    }
    else if(age<18 and weight>=50)
    {
        cout<<"\nYour age does not meet the requirements so, we can't check your Temperature";
    }
    else if(weight<50 and age>=18)
    {
        cout<<"\nYour weight does not meet the requirements so, we can't check your Temperature";
    }
    else
    {
        cout<<"\nBoth your age and weight do not meet the requirements so, we can't check your Temperature";
    }

    return 0;
}
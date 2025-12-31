#include <iostream>
using namespace std;

int main()
{
    int x,age; char ch;

    cout<<"Enter Your age : ";cin>>age;

    while(age < 1)
    {
        cout<<"Invalid age...Please Enter Your Real Age : ";cin>>age;
    }

    if(age<18)
    {
        cout<<"\nYou Can not Have a CNIC or Driving License before 18 so, your Insurance is Invalid";
    }

    if(age>17)
    {
        cout<<"\nDo you have a Driving License or CNIC available?\n";
        cout<<"Press 'Y' for YES  OR  Press 'N' for NO\n";
        cout<<"Selected Answer : ";cin>>ch;

        while((ch!='Y' and ch!='y') and (ch!='n' and ch!='N'))
        {
            cout<<"Invalid Input...Please Press Y or N to continue : ";cin>>ch;
        }

        if(ch == 'Y' or ch=='y')
        {
            cout<<"\n\nPress 1 To Insert Picture Of Your CNIC\n";
            cout<<"Press 2 To Insert Picture Of Your Driving License\n";
            cout<<"Selected Answer : "; cin>>x;

            while (x!=1 and x!=2)
            {
                cout<<"Invalid Input...Please Press 1 or 2 to continue : ";cin>>x;
            }

            switch(x)
            {
                case 1:
                {
                    cout<<"Your CNIC is valid. So, Your Insurance Is also Valid";
                    break;
                }
                case 2:
                {
                    char i;
                    cout<<"\nHave you taken a Driving Test?\n";
                    cout<<"Press 'Y' for YES  OR  Press 'N' for NO\n";
                    cout<<"Selected Answer : ";cin>>i;

                    while((i!='Y' and i!='y') and (i!='n' and i!='N'))
                    {
                        cout<<"Invalid Input...Please Press Y or N to continue : ";cin>>i;
                    }

                    if(i=='Y' or i=='y')
                    {
                        cout<<"\nYour Driving License Is Valid. So, Your Insurance is Also Valid";
                        break;
                    }
                    else
                    {
                        cout<<"\nYour Driving License Is Invalid. So, Your Insurance is also Invalid";
                        break;
                    }
                }
            }
        }
        else
        {
            cout<<"\nSince You Don't Have Your Driving License or CNIC on you, We can't Verify The Validity Of Your Insurance";
        }
    }

    return 0;
}
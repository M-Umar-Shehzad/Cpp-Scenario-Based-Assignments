#include<iostream>
using namespace std;


void intro();
void condition();
void loops();
void jump();
int main()
{
    int pass;
    int id;
    cout<<"\n\nEnter an ID: ";cin>>id;
    cout<<"Choose a Password: ";cin>>pass;
    cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~\n\n";

    int id1;
    int pass1;
    cout<<"Enter your id: ";cin>>id1;
    while(id1!=id)
    {
        cout<<"Incorrect ID... Please try again : ";cin>>id1;
    }
    cout<<"Enter Your Password : ";cin>>pass1;
    while(pass1!=pass)
    {
        cout<<"Incorrect Password... Please try again : ";cin>>pass1;
    }

    cout<<"   **Login Successful**  ";

    bool flag = true;
    
    while(flag == true)

    {

    int choice;
    cout<<"\n\n **LIST OF C++ TOPICS**\n\n";
   
    cout<<"1. Introduction\n";
    cout<<"2. Condtional Statements\n";
    cout<<"3. Loops\n";
    cout<<"4. Jump Statements\n";
    cout<<"0. Log out\n\n";

    cout<<"Enter Your choice : ";cin>>choice;
    while(choice<0 || choice > 4)
    {
        cout<<"Invalid Number... Please Try again : ";cin>>choice;
    }

    switch(choice)
    {
        case 0:
        {
            cout<<"\nYou have been logged out!\n";
            flag = false;
            break;
        }

        case 1:
        {
            cout<<"\n        **INTRODUCTION**           \n";
            intro();
	    break;
        }
        case 2:
        {
            cout<<"\n    **Conditonal Statements**      \n";
            condition();
	    break;
        }
        case 3:
        {
            cout<<"\n           **Loops**               \n";
            loops();
	    break;
        }
        case 4:
        {
            cout<<"\n       **Jump Statements**           \n";
            jump();
	    break;
        }

    }

    }
   
    
return 0;
}
void intro()
{
  cout<<"\n   ~TOPICS Overview~  \n ";
  cout<<"\n1. Syntax";
  cout<<"\n2. Variables";
  cout<<"\n3. Data Types";
  int x;
  cout<<"\n\nPress 0 to go back: ";cin>>x;
  while (x!=0)
  {
   cout<<"PRESS 0!...";cin>>x;
  }
return;
}
void condition()
{
   cout<<"\n   ~TOPICS Overview~  \n ";
   cout<<"\n1. if";
   cout<<"\n2. if-else";
   cout<<"\n3. else-if";
   int x;
  cout<<"\n\nPress 0 to go back: ";cin>>x;
  while (x!=0)
  {
   cout<<"PRESS 0!...";cin>>x;
  }
return;
}
void loops()
{
  cout<<"\n   ~TOPICS Overview~  \n ";
  cout<<"\n1. For Loop";
  cout<<"\n2. While Loop";
  cout<<"\n3. Do-While Loops";
  int x;
  cout<<"\n\nPress 0 to go back: ";cin>>x;
  while (x!=0)
  {
   cout<<"PRESS 0!...";cin>>x;
  }
return;
}
void jump()
{
  cout<<"\n   ~TOPICS Overview~  \n ";
  cout<<"\n1. Break";
  cout<<"\n2. Contionue";
  cout<<"\n3. Go-To";
  int x;
  cout<<"\n\nPress 0 to go back: ";cin>>x;
  while (x!=0)
  {
   cout<<"PRESS 0!...";cin>>x;
  }
return;
}

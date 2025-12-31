#include<iostream>
using namespace std;
int main()
{
	int n,sub_1,sub_2,sub_3,sub_4,sub_5,total;
	int pass=0;
	int fail=0;
	float percentage;
	float highest = 0;
	string name,student;
	cout<<"Enter the Number of students : ";cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		
		cout<<"\nEnter The name of the  student "<<i<<" : ";cin>>name;
		
		cout<<"\nEnter the marks for English  : ";cin>>sub_1;
		while(sub_1<0 or sub_1>100)
		{
			cout<<"Invalid marks... Please re-enter the marks : ";cin>>sub_1;
		}
		cout<<"\nEnter the marks for Chemistry : ";cin>>sub_2;
		while(sub_2<0 or sub_2>100)
		{
			cout<<"Invalid marks... Please re-enter the marks : ";cin>>sub_2;
		}
		cout<<"\nEnter the marks for Maths : ";cin>>sub_3;
		while(sub_3<0 or sub_3>100)
		{
			cout<<"Invalid marks... Please re-enter the marks : ";cin>>sub_3;
		}
		cout<<"\nEnter the marks for Physics : ";cin>>sub_4;
		while(sub_4<0 or sub_4>100)
		{
			cout<<"Invalid marks... Please re-enter the marks : ";cin>>sub_4;
		}
		cout<<"\nEnter the marks for Biology : ";cin>>sub_5;
		while(sub_5<0 or sub_5>100)
		{
			cout<<"Invalid marks... Please re-enter the marks : ";cin>>sub_5;
		}
		
		cout<<"\n============================\n\n";
		
		
		total=sub_1+sub_2+sub_3+sub_4+sub_5;
		cout<<name<<" has obtained a Total of "<<total<< " marks out of 500 "<<endl;
		
		
		percentage=(total*100)/500.0;
		cout<<"He/she has obtained a "<<percentage<<" percentage "<<endl;
		
		
		
		if(percentage>=85)
		{
			cout<<"And has obtained an A grade"<<endl;
		}
		else if(percentage>=70)
		{
			cout<<"And has obtained an B grade"<<endl;
		}
		else if(percentage>=50)
		{
			cout<<"And has obtained an C grade"<<endl;
		}
		else if(percentage>=40)
		{
			cout<<"And has obtained an D grade"<<endl;
		}
		else
		{
			cout<<"And has obtained an F grade"<<endl;
		}
		
		if(percentage >=40)
		{
			cout<<"Statuts = Pass "<<endl;
		}
		else
		{
			cout<<"Status = Fail "<<endl;
		}
		
		cout<<"\n============================\n\n";
		
		if(percentage>highest)
		{
			highest = percentage;
			student = name;
		}
		
		if(percentage>=40)
		{
			pass+=1;
		}
		else
		{
			fail+=1;
		}
		
			
	}
	 
	cout<<"             **CLASS RESULT SUMMARY**           \n\n";
	cout<<"The Number of students passed in the class : "<<pass<<endl<<endl;
	cout<<"While The Number of Students who failed are : "<<fail<<endl<<endl;
	cout<<"The highest percentage in class is "<<highest<<" obtained by "<<student;
	
	
return 0;
}
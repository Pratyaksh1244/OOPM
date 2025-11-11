#include <iostream>
using namespace std;


class Employee {
	public:
		string name;
		string post;
		
		void getdata()
		{
			cout<<"Enter Name : "<<endl;
			cin>>name;
			cout<<"Enter post : "<<endl;
			cin>>post;
		}
		
		void showdata()
		{
			cout<<"Name of Employee : "<<name<<endl;
			cout<<"Post of Employee : "<<post<<endl;
		}
};

class Department : virtual public Employee
{
	public:
	    string dpt;
	void showdpt()
	{
		cout<<"Enter Department : "<<endl;
		cin>>dpt;
		
		cout<<"Department of  "<<name<<" is "<<dpt<<endl;
	}
};

class Organisation : virtual public Employee
{
	public: 
	  string org = "RGPV";
	
	void showorg()
	{
		cout<<"Organisation of "<<name<<" is "<<org<<endl;
		
}
};

class Management : public Department,public Organisation

{
	public:
	  string manag = "Engineering";
	
	void showmanag()
	{
		cout<<"Management of "<<name<<" is "<<manag<<endl;
	}
};

int main()
{
	Management M;
	M.getdata();
	M.showdata();
	M.showdpt();
	M.showorg();
	M.showmanag();
}

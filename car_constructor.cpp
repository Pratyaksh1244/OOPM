#include<iostream>
using namespace std;
class car {
	string m;
	string c;
	
	public:
		car(string model , string colour)
		
		{
			m=model;
			c=colour;
		}
		void show()
		{
			cout<<"Car model is = "<<m<<endl;
			cout<<"Car colour is = "<<c<<endl;
		}
};

class Nexon : public car
{
	string b;
	float p;
	public:
	   Nexon(string m,string c,string b,float p): car(m,c)
	{
		b=brand;
		p=price;
	}
	void print()
	{
		cout<<"Nexon brand is "<<brand<<endl;
		cout<<"Nexon price is "<<price<<endl;
	}
};

int main(){
Nexon N ("TATA",16.5)
car m("TXT Diesel")
car c("Black")
N.show();
N.print();

return 0;
}

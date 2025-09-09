
#include<iostream>
using namespace std;
int f1(int , int);
int f2(int* , int*);
int main()
{
	int a,b,c,d;
	cout<<"Enter value a : "<<endl;
	cin>>a;
	
	cout<<"Enter value b : "<<endl;
	cin>>b;
	
	int k=f1(a,b);
	cout<<"Outside Function"<<endl;
	
	cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
	
	cout<<"Output of value addition k : "<<k<<endl;
	
	
	cout<<"Enter value c : "<<endl;
	cin>>c;
	
	cout<<"Enter value d : "<<endl;
	cin>>d;
	
	int l=f2(&c,&d);
	cout<<"Outside Function"<<endl;
	cout<<"C = "<<c<<endl<<"D = "<<d<<endl;
	
	cout<<"Output of address addition l : "<<l<<endl;
	return 0;
	
}

int f1(int x, int y)
{
	cout<<"X = "<<x<<endl<<"Y = "<<y<<endl;
	x=3;
	y=4;
	cout<<"After"<<endl<<"Inside function"<<endl<<"X = "<<x<<endl<<"Y = "<<y<<endl;
	
	return x + y;
}

int f2(int *p, int *q)
{
	cout<<"Address of P = "<<p<<endl<<"Address of Q = "<<q<<endl;
	cout<<"P = "<<p<<endl<<"Q = "<<q<<endl;
	*p=2;
	*q=7;
	cout<<"After"<<endl<<"Inside function"<<endl<<"p = "<<*p<<endl<<"Q = "<<*q<<endl;
	
	return *p + *q;
}



#include<iostream>
using namespace std;
int swapping(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
};

int main()
{
	int a , b;
	cout<< "Enter First Value = "<<endl;
	cin>>a;
	
	cout<< "Enter Second Value = "<<endl;
	cin>>b;
	
	cout<< "Before swapping value of a =  "<<a<<" and b = "<<b<<endl;
	swapping(&a,&b);
	cout<< "After swapping value of a =  "<<a<<" and b = "<<b<<endl;
	return 0;
}

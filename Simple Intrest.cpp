#include<iostream>
using namespace std;
int main(){
	
float p,r,t;
cout<<"To Calculate Simple Interest"<<endl;

cout<<"Enter Princial Amount : "<<endl;
cin>>p;

cout<<"Enter Rate of intrest : "<<endl;
cin>>r;

cout<<"Enter time : "<<endl;
cin>>t;

float Si = (p*r*t)/100;

cout<<"Simple Interest is "<<Si<<endl;
return 0;
}


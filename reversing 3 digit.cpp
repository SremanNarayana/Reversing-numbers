#include<iostream>
using namespace std;

int main() {

	int a,b,c,x;

	cout<<"type your first digit :\n";
	cin>>a;

	cout<<"type your second digit :\n";
	cin>>b;

	cout<<"type your third digit :\n";
	cin>>c;

	//the original digit.

	cout<<"the entered no. is :"<<a<<b<<c<<"\n\n";

//	code to reverse the no.
    x = a;
	a = c;
	c = x;
	
	


	cout<<"the reversed no. is :"<<a<<b<<c; //the reversed no.

	return 0;

}

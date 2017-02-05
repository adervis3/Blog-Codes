#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
int a1,a2;
	cout<<"1.Right Shift\n2.Left Shift\n3.AND\n4.OR\n5.XOR\n6.NOT\n"<<endl;
	cout<<"You need 2 values"<<endl;
	cout<<"Please enter 1. value...: ";
	cin>>a1;
	cout<<"Please enter 2. value...: ";
	cin>>a2;	

	cout<<a1<<" >> (Right Shift) "<<a2<<"  : "<< (a1>>a2)<<endl;
	cout<<a1<<" << (Left Shift) "<<a2<<"  : "<< (a1<<a2)<<endl;
	cout<<a1<<" & (AND) "<<a2<<"  : "<< (a1&a2)<<endl;
	cout<<a1<<" | (OR) "<<a2<<"  : "<< (a1|a2)<<endl;
	cout<<a1<<" ^ (XOR) "<<a2<<"  : "<< (a1^a2)<<endl;
	cout<<" ~ (NOT) "<<a1<<"  : "<< (~a1)<<endl;
	cout<<" ~ (NOT) "<<a2<<"  : "<< (~a2)<<endl;

	return 0;
}

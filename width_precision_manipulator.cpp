#include<iostream>
using namespace std;
main()
{
	float pi=22.0/7.0;
	int i;
	cout<<"Value pf PI: \n";
	for(i=1;i<=10;i++)
	{
		cout.width(i+1);
		cout.precision(i);
		cout<<pi<<"\n";
	}
}

#include<iostream>
using namespace std;
int main()
{
	int size=20;
	char city[20];
	cout<<"Enter City name: \n";
	cin>>city;
	cout<<"City Name: "<<city<<"\n\n";
	
	cout<<"\n Enter the City Name again: \n";
	cin.getline(city,size);
	cout<<"\n City Name now: "<<city<<endl<<endl;
	
	cout<<"Enter Another City Name: \n";
	cin.getline(city,size);
	cout<<"New City Name: "<<city<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
main()
{
	string string1="c++ ";
	string string2="programming";
	int i=0;
	int count=0;
	while(string1[i]!='\0')
	{
		count++;
		i++;
	}
	
	cout.write(string1,10);
}

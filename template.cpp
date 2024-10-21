#include<iostream>
using namespace std;

template<typename t,int size>
class array{
	t a[size];
	public:
		void insert()
		{
			for(int i=0;i<size;i++)
			{
				cout << "\nEnter the " << i << " number";
				cin >> a[i];
			}
		}
		void display()
		{
			for(int i=0;i<size;i++)
			{
				cout << a[i] << endl;
			}
		}
		void sort()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=size-1;i<j;j--)
				{
					if(a[j] < a[j-1])
					{
						swap(a[j],a[j-1]);	
					}
				}
			}
		}
};

template<typename x1>
void swap(x1 &a,x1 &b)
{
	x1 temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	cout << "\n INTEGER: \n\n";
	array<int,6> arr;
	arr.insert();
	arr.display();
	arr.sort();
	cout << "\n \t SORTED: \n";
	arr.display();
	
	//FLOAT
	cout << "\n FLOAT: \n\n";
	array<float,6> arr1;
	arr1.insert();
	arr1.display();
	arr1.sort();
	cout << "\n \t Float SORTED: \n";
	arr1.display();
	
	//Character
	array<char,5> ch_arr;
	ch_arr.insert();
	ch_arr.display();
	ch_arr.sort();
	cout << "\n\t Character Sorted: \n";
	ch_arr.display();
}
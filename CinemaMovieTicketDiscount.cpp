#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Total movies in Cinema: ";
	cin >> size;
	string movies[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Update movies list: ";
		cin >> movies[i];
	}
	int price = 500;
	double discount=0.00;
	string movie=" ";
	cout<<"Movie: ";
	cin>>movie;
	for ( int i=0; i < size; i++ )
	{
		if( movies[i] == movie){
		if( i % 2 == 0)
		{
			discount = price * 0.1;
		}
		else
		{
			discount = price * 0.05;
		}
	cout<<"Discounted Ticket Price: "<<price - discount;
		
		}
	}
	

}
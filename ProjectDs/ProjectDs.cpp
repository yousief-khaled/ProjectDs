#include <iostream>
#include <vector>
#include<string>
#include"Customer.h"
using namespace std;
int  customer_signin(vector<Customer> &v1)
{
	string name;
	bool valid = false;
	string password;
	int index = 0;
	cout << "Enter your name " << endl;
	cout << "Enter your password " << endl;
	cin >> name;
	cin >> password;

	for (int i = 0; i < v1.size(); i++)
	{
		if (name == v1[i].getname() && password == v1[i].getPass())
		{
			valid = true;
			index = i;
			break;
		}		
	}
	if (valid == true)
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;
	return index;
}
void customer_signup()
{

}
int main()
{
	vector<Customer> customers;
	Customer c1("mostafa", "mostafa@gmail.com","12345", 01211542545, "zsd");
	Customer c2("magdy", "magdy@gmail.com", "123445",154257575572, "zsdd");
	customers.push_back(c1);
	customers.push_back(c2);

	cout << "for seller press 1" << endl;
	cout << "for Customer press 2" << endl;
	cout << "for admin press 3" << endl;
		int num;
		cout << "Please , Enter a number" << endl;
		cin >> num;
		if (num == 1)
		{

		}
		else if (num == 2)
		{
			cout << "for sign in press 1" << endl;
			cout << "for sign up press 2" << endl;
			int x;
			cin >> x;
			if (x == 1)
			{

				int i = customer_signin(customers);
				customers[i].mainMenuCustomer();
			}
			else
			{

			}
		}
		else if(num == 3)
		{

		}
		vector<Customer>().swap(customers);

}

#include<iostream>
using namespace std;
int main()
{
	double num;
	cout << "Enter a number:\n";
	cin >> num;
	if (num == 0)
		cout << "Num is zero\n";
	else if (num > 0)
		cout << "Num is a positive number\n";
	else
		cout << "Num is a negative number\n";
	system("pause");
	return 0;
}
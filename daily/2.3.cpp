#include<iostream>

int main()
{
	using namespace std;//编译指令
	
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. ";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}
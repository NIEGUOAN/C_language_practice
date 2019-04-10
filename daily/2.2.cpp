#include<iostream>

int main()
{
	using namespace std;//编译指令
	
	int carrots;

	carrots = 25 ;
	cout << "I have ";
	cout << carrots;//萝卜数25个
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}
#include<iostream>
using namespace std;//编译指令

int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;//以后的输出都为十六进制
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;//以后的输出都为八进制
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}
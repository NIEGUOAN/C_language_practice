﻿#include<iostream>
using namespace std;//编译指令

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);
	int debt = 7.2e12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;//int型最大为1634811904
	return 0;
}
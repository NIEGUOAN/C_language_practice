#include<iostream>
using namespace std;//编译指令

int main()
{
	float a = 2.34e+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;//运算结果为零,精度丢失
	return 0;
}
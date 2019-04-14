#include<iostream>
using namespace std;//编译指令

int main()
{
	//通常cout会删除结尾的零,例如3333333.250000显示为3333333.25,调用cout.setf将覆盖此行为
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	return 0;
}
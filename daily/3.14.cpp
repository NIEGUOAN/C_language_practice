#include<iostream>
using namespace std;//编译指令

int main()
{
	int auks, bats, coots;

	auks = 19.99 + 11.99;//直接相加截短31.98-->31

	bats = (int)19.99 + (int)11.99;//强制类型转换:19.99-->19 , 11.99-->11
	coots = int(19.99) + int(11.99);//创建一个新的临时变量int temp=(int)19.99并返回temp
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is ";
	cout << int(ch) << endl;
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;
	return 0;
}
#include<iostream>
#include<cstring>
using namespace std;//编译指令

int main()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << "Howdy! I'm" << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
        //strlen返回的是储存在数组中的字符串的长度
	cout << "in an array is " << sizeof(name1) << " bytes.\n";
	cout << "in an array of " << name1[0] << ".\n";
	name2[3] = '\0';//只输出前三个字符,第四个字符为空
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	return 0;
}
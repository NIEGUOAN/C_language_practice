#include<iostream>

using namespace std;//编译指令
int stonetolb(int);
int main()
{
	int stone;
	cout << "Enter the weight in stone.";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;

}

int stonetolb(int sts)
{
	return 14 * sts;
}
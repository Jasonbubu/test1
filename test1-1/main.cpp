#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	float r = 0;   //圆的半径
	float len = 0; //圆的周长
	float s = 0;   //圆的面积

	cout << "请输入一个圆的半径";
	cin >> r;

	len = 2 * 3.14 * r;
	s = 3.14 * r * r;

	cout.precision(2);
	cout.flags(cout.fixed);

	cout << "圆的周长是:" << len << endl;
	cout << "圆的面积是:" << s << endl;

	system("pause");

	return 0;
}
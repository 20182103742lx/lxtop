// lxtop.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CObject {
private:
	int x;
	int y;
public:
	void setXY(int a, int b) {
		x = a;
		y = b;
	}
	void display() {
		cout << "x=" << x << "y=" << y << endl;
	}
};

int main()
{
	CObject ob;
	ob.display();
	ob.setXY(100, 200);
	ob.display();

    return 0;
}


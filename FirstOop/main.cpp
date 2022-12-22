#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point() = default;
	Point (int a, int b):x(a),y(b){}
};

int main()
{
	cout << "Привет мир !!!\n";

}
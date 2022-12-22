#include<iostream>
using namespace std;
class Car
{
	char* name;
	int year;
public :
	Car() = default;
	Car(const char* n, int y) :year(y)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	~Car()
	{
		delete[]name;
	}
	
};

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

	int mas[5]{ 1,2,3,4,5 };

	Car obj[2]{};
	 
}
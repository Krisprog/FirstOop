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

int main()
{
	Car obj[2]{};
	 
}
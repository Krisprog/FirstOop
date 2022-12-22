#include<iostream>
#include"MyString.h"
using namespace std;

int main()
{
	MyString obj1("Hello world");
	MyString obj2("Hello");

	obj1.Print();
	obj2.Print();
	obj1.MyStrcpy(obj2);

	obj1.Print();
	obj2.Print();

	
}
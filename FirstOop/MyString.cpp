#include "MyString.h"
#include<iostream>
using namespace std;

MyString::MyString() //����������� �� ���������, ����������� ������� ������ ������ 80 ��������;
{
	l = 80;
	str = new char[l];
}

MyString::MyString(int size) //�����������, ����������� ��������� ������ ������������� �������;
{
	l = size;
	str = new char[l];
}

MyString::MyString(const char* st)//�����������, ������� ������ ������ � �������������� � �������, ���������� �� ������������.
{
	l = strlen(st);
	str = new char[l + 1];
	strcpy_s(str, l + 1, st);
}

MyString::~MyString()//����������;
{
	delete[] str;
}

void MyString::MyStrcpy(MyString& obj)
{
	if (l != 0)
	{
		delete[]str;
	}
	l = obj.l;
	str = new char[l + 1];
	strcpy_s(str, l + 1, obj.str);
}

void MyString::Print()
{
	cout << str << endl;
}

bool MyString::MyStrStr(const char* str)
{
	return false;
}

int MyString::MyChr(char c)
{
	return 0;
}

int MyString::MyStrLen()
{
	return 0;
}

void MyString::MyStrCat(MyString& b)
{
}

void MyString::MyDelChr(char c)
{
}

int MyString::MyStrCmp(MyString& b)
{
	return 0;
}

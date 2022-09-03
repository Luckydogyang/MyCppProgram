#pragma once
#include <iostream>
using namespace std;
class Student
{
public:
	void get_value()
	{
		cin >> num >> name >> sex;
	}
	void display()
	{
		cout << "num:"<< num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;
	}
private:
	int num;
	char name[10];
	char sex;
};
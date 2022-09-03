#pragma once
#include"Student.cpp"
#include<iostream>
using namespace std;
class Student1 : public Student
{
public:
	void get_value_1()
	{
		get_value();
		cin >> age >> addr;
	}
	void display_1()
	{
		cout << "age:" << age << endl;
		cout << "addr:" << addr << endl;
	}
private:
	int age;
	char addr[30];
};
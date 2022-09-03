// winprogram.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include"Student.cpp"
#include"Student1.cpp"
#include <iostream>
#include"defstruct.h"
#include<string>
int main()
{
	//Student1 stud1;
	//stud1.get_value_1();
	//stud1.display();
	//stud1.display_1();
	products apple;
	apple.a = 4;
	strcpy_s(apple.name, "yangsai");
	apple.price = 10000.28;
	cout << "a" << apple.a << "name:" << apple.name << "price" << apple.price << endl;
	return 0;
}


#pragma once

#include<iostream>
#include<string>
#include"display.h"

using namespace std;

void one()
{
	//常见的string类构造函数有以下几种形式：
	std::string str("12345678");
	char ch[] = "abcdefgh";
	std::string a; //定义一个空字符串
	std::string str_1(str); //构造函数，全部复制
	std::string str_2(str, 2, 5); //构造函数，从字符串str的第二个元素开始，复制5个元素，赋值给str_2;
	std::string str_3(ch, 5); //将字符串的前5个元素赋值给str_3
	std::string str_4(5, 'X'); //将5个"X"组成的字符串并赋值给str_4
	std::string str_5(str.begin(), str.end()); //复制str所有元素，并复制给str_5

	display(str);
	display(ch);
	display(str_1);
	display(str_2);
	display(str_3);
	display(str_4);
	display(str_5);


}

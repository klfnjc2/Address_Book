#pragma once
#ifndef FUNCTION
#define FUNCTION
#include <iostream>
#include <vector>
#include "Address_Book.h"

class FuncTion {
private:
	std::vector<Address_Book>Book;//联系人存于此处
	Address_Book Temp;//临时接收信息

public:
	FuncTion() {//构造
		Address_Book Temp;
		Temp.SetName("张三");
		Temp.SetAge(19);
		Temp.SetSex(1);
		Temp.SetPhone_Number("110");
		Temp.SetAddress("山东");
		Book.push_back(Temp);

		Temp.SetName("王五");
		Temp.SetAge(20);
		Temp.SetSex(0);
		Temp.SetPhone_Number("133");
		Temp.SetAddress("北京");
		Book.push_back(Temp);

		Temp.SetName("李四");
		Temp.SetAge(20);
		Temp.SetSex(0);
		Temp.SetPhone_Number("131");
		Temp.SetAddress("烟台招远");
		Book.push_back(Temp);
	}
	void menu();//菜单栏
	void Add();//添加联系人
	void Print();//显示联系人
	void Dele();//删除联系人
	void Find();//查找联系人
	void Revise();//修改联系人信息
	void Clear();//清空联系人
	void _NULL();//占位
};
#endif
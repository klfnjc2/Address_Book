#pragma once
#ifndef FUNCTION
#define FUNCTION
#include <iostream>
#include <vector>
#include "Address_Book.h"

class FuncTion {
private:
	std::vector<Address_Book>Book;//��ϵ�˴��ڴ˴�
	Address_Book Temp;//��ʱ������Ϣ

public:
	FuncTion() {//����
		Address_Book Temp;
		Temp.SetName("����");
		Temp.SetAge(19);
		Temp.SetSex(1);
		Temp.SetPhone_Number("110");
		Temp.SetAddress("ɽ��");
		Book.push_back(Temp);

		Temp.SetName("����");
		Temp.SetAge(20);
		Temp.SetSex(0);
		Temp.SetPhone_Number("133");
		Temp.SetAddress("����");
		Book.push_back(Temp);

		Temp.SetName("����");
		Temp.SetAge(20);
		Temp.SetSex(0);
		Temp.SetPhone_Number("131");
		Temp.SetAddress("��̨��Զ");
		Book.push_back(Temp);
	}
	void menu();//�˵���
	void Add();//�����ϵ��
	void Print();//��ʾ��ϵ��
	void Dele();//ɾ����ϵ��
	void Find();//������ϵ��
	void Revise();//�޸���ϵ����Ϣ
	void Clear();//�����ϵ��
	void _NULL();//ռλ
};
#endif
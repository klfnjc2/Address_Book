#pragma once
#ifndef ADDRESS_BOOK
#define ADDRESS_BOOK
#include<string>

class Address_Book {
private:
    std::string Name;//����
    int Age;//����
    bool Sex;//�Ա�
    std::string Phone_Number;//�绰����
    std::string Address;//סַ

public:
    void SetName(std::string Temp_Name);//��������
    void SetAge(int Temp_Age);//��������
    void SetSex(bool Temp_Sex);//�����Ա�
    void SetPhone_Number(std::string Temp_Phone_Number);//����绰����
    void SetAddress(std::string Temp_Address);//�����ַ

    void printName();//�������
    void printAge();//�������
    void printSex();//����Ա�
    void printPhone_Number();//����绰����
    void printAddress();//�����ַ

    std::string ReturnName();//��������
    std::string ReturnPhone_Number();//���ص绰����
    std::string ReturnAddress();//���ص�ַ
};
#endif
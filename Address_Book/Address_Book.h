#pragma once
#ifndef ADDRESS_BOOK
#define ADDRESS_BOOK
#include<string>

class Address_Book {
private:
    std::string Name;//姓名
    int Age;//年龄
    bool Sex;//性别
    std::string Phone_Number;//电话号码
    std::string Address;//住址

public:
    void SetName(std::string Temp_Name);//输入姓名
    void SetAge(int Temp_Age);//输入年龄
    void SetSex(bool Temp_Sex);//输入性别
    void SetPhone_Number(std::string Temp_Phone_Number);//输入电话号码
    void SetAddress(std::string Temp_Address);//输入地址

    void printName();//输出姓名
    void printAge();//输出年龄
    void printSex();//输出性别
    void printPhone_Number();//输出电话号码
    void printAddress();//输出地址

    std::string ReturnName();//返回姓名
    std::string ReturnPhone_Number();//返回电话号码
    std::string ReturnAddress();//返回地址
};
#endif
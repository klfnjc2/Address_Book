#include<iostream>
#include<string>
#include<windows.h>
#include "FuncTion.h"

void FuncTion::menu() {
    system("CLS");
    std::cout
        << "**********************" << std::endl
        << "*****1.添加联系人*****" << std::endl
        << "*****2.显示联系人*****" << std::endl
        << "*****3.删除联系人*****" << std::endl
        << "*****4.查找联系人*****" << std::endl
        << "*****5.修改联系人*****" << std::endl
        << "*****6.清空联系人*****" << std::endl
        << "*****0.退出通讯录*****" << std::endl
        << "**********************" << std::endl;
}

void FuncTion::Add() {
    system("CLS");
    std::cout << "输入姓名:";
    std::string S;
    std::cin >> S;
    Temp.SetName(S);
    system("CLS");

    std::cout << "输入年龄:";
    int I;
    std::cin >> I;
    Temp.SetAge(I);
    system("CLS");

    std::cout << "输入性别:";
    while (1) {
        std::cin >> S;
        if (S == "男") {
            Temp.SetSex(1);
            break;
        }
        else if (S == "女") {
            Temp.SetSex(0);
            break;
        }
        else {
            system("CLS");
            std::cout << "非法值,重新输入性别:";
        }
    }
    system("CLS");

    std::cout << "输入电话:";
    std::cin >> S;
    Temp.SetPhone_Number(S);
    system("CLS");

    std::cout << "输入住址:";
    std::cin >> S;
    Temp.SetAddress(S);
    system("CLS");

    Book.push_back(Temp);

    std::cout << "已添加联系人:";
    Temp.printName();
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Print() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "没有联系人";
        std::cout << std::endl;
        system("pause");
        system("CLS");
        return;
    }
    for (auto it = Book.begin(); it != Book.end(); it++) {
        std::cout << "姓名:";
        it->printName();
        std::cout << std::endl;

        std::cout << "年龄:";
        it->printAge();
        std::cout << std::endl;

        std::cout << "性别:";
        it->printSex();
        std::cout << std::endl;

        std::cout << "电话号码:";
        it->printPhone_Number();
        std::cout << std::endl;

        std::cout << "地址:";
        it->printAddress();
        std::cout << std::endl << std::endl;
    }
    std::cout << "已显示所有联系人";
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Dele() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "没有联系人";
        std::cout << std::endl;
        system("pause");
        system("CLS");
        return;
    }
    std::cout << "输入姓名:";
    std::string S;
    std::cin >> S;
    system("CLS");
    for (auto it = Book.begin(); it != Book.end(); it++) {
        if (it->ReturnName() == S) {
            Book.erase(it);
            std::cout << "已删除联系人:" << S;
            std::cout << std::endl;
            system("pause");
            system("CLS");
            return;
        }
    }
    std::cout << "未找到联系人:" << S;
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Find() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "没有联系人";
        std::cout << std::endl;
        system("pause");
        system("CLS");
        return;
    }
    std::cout << "输入联系人相关信息:";
    std::string S;
    std::cin >> S;
    system("CLS");
    for (auto it = Book.begin(); it != Book.end(); it++) {
        if (it->ReturnName().find(S) != std::string::npos || it->ReturnPhone_Number().find(S) != std::string::npos || it->ReturnAddress().find(S) != std::string::npos) {
            std::cout << std::endl << "姓名:";
            it->printName();
            std::cout << std::endl;

            std::cout << "年龄:";
            it->printAge();
            std::cout << std::endl;

            std::cout << "性别:";
            it->printSex();
            std::cout << std::endl;

            std::cout << "电话号码:";
            it->printPhone_Number();
            std::cout << std::endl;

            std::cout << "地址:";
            it->printAddress();
            std::cout << std::endl;
        }
    }
    std::cout << std::endl << "以上是查找到的联系人:";
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Revise() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "没有联系人";
        std::cout << std::endl;
        system("pause");
        return;
    }
    std::cout << "输入姓名:";
    std::string S;
    std::cin >> S;
    bool B;
    system("CLS");
    for (auto it = Book.begin(); it != Book.end(); it++) {
        if (it->ReturnName() == S) {
            std::cout << "原姓名为:" << it->ReturnName() << "    是否修改  1是 0否" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "修改为:";
                std::cin >> S;
                it->SetName(S);
            }

            system("CLS");
            std::cout << "原年龄为:";
            it->printAge();
            std::cout << "    是否修改  1是 0否" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "修改为:";
                int I;
                std::cin >> I;
                it->SetAge(I);
            }

            system("CLS");
            std::cout << "原姓别为:";
            it->printSex();
            std::cout << "    是否修改  1是 0否" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                while (1) {
                    std::cout << "修改为:";
                    std::cin >> S;
                    if (S == "男") {
                        it->SetSex(1);
                        break;
                    }
                    else if (S == "女") {
                        it->SetSex(0);
                        break;
                    }
                    else {
                        system("CLS");
                        std::cout << "非法值,重新输入性别" << std::endl;
                    }
                }
            }

            system("CLS");
            std::cout << "原手机号为:" << it->ReturnPhone_Number();
            std::cout << "    是否修改  1是 0否" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "修改为:";
                std::cin >> S;
                it->SetPhone_Number(S);
            }

            system("CLS");
            std::cout << "原地址为:" << it->ReturnAddress();
            std::cout << "    是否修改  1是 0否" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "修改为:";
                std::cin >> S;
                it->SetAddress(S);
            }

            system("CLS");
            std::cout << "完成修改:" << std::endl;
            system("pause");
            return;
        }
    }
    std::cout << "未找到联系人:" << S;
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Clear() {
    system("CLS");
    Book.clear();
    std::cout << "已清空联系人" << std::endl;
    system("pause");
}

void FuncTion::_NULL() {
    system("CLS");
}
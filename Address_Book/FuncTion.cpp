#include<iostream>
#include<string>
#include<windows.h>
#include "FuncTion.h"

void FuncTion::menu() {
    system("CLS");
    std::cout
        << "**********************" << std::endl
        << "*****1.�����ϵ��*****" << std::endl
        << "*****2.��ʾ��ϵ��*****" << std::endl
        << "*****3.ɾ����ϵ��*****" << std::endl
        << "*****4.������ϵ��*****" << std::endl
        << "*****5.�޸���ϵ��*****" << std::endl
        << "*****6.�����ϵ��*****" << std::endl
        << "*****0.�˳�ͨѶ¼*****" << std::endl
        << "**********************" << std::endl;
}

void FuncTion::Add() {
    system("CLS");
    std::cout << "��������:";
    std::string S;
    std::cin >> S;
    Temp.SetName(S);
    system("CLS");

    std::cout << "��������:";
    int I;
    std::cin >> I;
    Temp.SetAge(I);
    system("CLS");

    std::cout << "�����Ա�:";
    while (1) {
        std::cin >> S;
        if (S == "��") {
            Temp.SetSex(1);
            break;
        }
        else if (S == "Ů") {
            Temp.SetSex(0);
            break;
        }
        else {
            system("CLS");
            std::cout << "�Ƿ�ֵ,���������Ա�:";
        }
    }
    system("CLS");

    std::cout << "����绰:";
    std::cin >> S;
    Temp.SetPhone_Number(S);
    system("CLS");

    std::cout << "����סַ:";
    std::cin >> S;
    Temp.SetAddress(S);
    system("CLS");

    Book.push_back(Temp);

    std::cout << "�������ϵ��:";
    Temp.printName();
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Print() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "û����ϵ��";
        std::cout << std::endl;
        system("pause");
        system("CLS");
        return;
    }
    for (auto it = Book.begin(); it != Book.end(); it++) {
        std::cout << "����:";
        it->printName();
        std::cout << std::endl;

        std::cout << "����:";
        it->printAge();
        std::cout << std::endl;

        std::cout << "�Ա�:";
        it->printSex();
        std::cout << std::endl;

        std::cout << "�绰����:";
        it->printPhone_Number();
        std::cout << std::endl;

        std::cout << "��ַ:";
        it->printAddress();
        std::cout << std::endl << std::endl;
    }
    std::cout << "����ʾ������ϵ��";
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Dele() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "û����ϵ��";
        std::cout << std::endl;
        system("pause");
        system("CLS");
        return;
    }
    std::cout << "��������:";
    std::string S;
    std::cin >> S;
    system("CLS");
    for (auto it = Book.begin(); it != Book.end(); it++) {
        if (it->ReturnName() == S) {
            Book.erase(it);
            std::cout << "��ɾ����ϵ��:" << S;
            std::cout << std::endl;
            system("pause");
            system("CLS");
            return;
        }
    }
    std::cout << "δ�ҵ���ϵ��:" << S;
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Find() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "û����ϵ��";
        std::cout << std::endl;
        system("pause");
        system("CLS");
        return;
    }
    std::cout << "������ϵ�������Ϣ:";
    std::string S;
    std::cin >> S;
    system("CLS");
    for (auto it = Book.begin(); it != Book.end(); it++) {
        if (it->ReturnName().find(S) != std::string::npos || it->ReturnPhone_Number().find(S) != std::string::npos || it->ReturnAddress().find(S) != std::string::npos) {
            std::cout << std::endl << "����:";
            it->printName();
            std::cout << std::endl;

            std::cout << "����:";
            it->printAge();
            std::cout << std::endl;

            std::cout << "�Ա�:";
            it->printSex();
            std::cout << std::endl;

            std::cout << "�绰����:";
            it->printPhone_Number();
            std::cout << std::endl;

            std::cout << "��ַ:";
            it->printAddress();
            std::cout << std::endl;
        }
    }
    std::cout << std::endl << "�����ǲ��ҵ�����ϵ��:";
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Revise() {
    system("CLS");
    if (Book.size() == 0) {
        std::cout << "û����ϵ��";
        std::cout << std::endl;
        system("pause");
        return;
    }
    std::cout << "��������:";
    std::string S;
    std::cin >> S;
    bool B;
    system("CLS");
    for (auto it = Book.begin(); it != Book.end(); it++) {
        if (it->ReturnName() == S) {
            std::cout << "ԭ����Ϊ:" << it->ReturnName() << "    �Ƿ��޸�  1�� 0��" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "�޸�Ϊ:";
                std::cin >> S;
                it->SetName(S);
            }

            system("CLS");
            std::cout << "ԭ����Ϊ:";
            it->printAge();
            std::cout << "    �Ƿ��޸�  1�� 0��" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "�޸�Ϊ:";
                int I;
                std::cin >> I;
                it->SetAge(I);
            }

            system("CLS");
            std::cout << "ԭ�ձ�Ϊ:";
            it->printSex();
            std::cout << "    �Ƿ��޸�  1�� 0��" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                while (1) {
                    std::cout << "�޸�Ϊ:";
                    std::cin >> S;
                    if (S == "��") {
                        it->SetSex(1);
                        break;
                    }
                    else if (S == "Ů") {
                        it->SetSex(0);
                        break;
                    }
                    else {
                        system("CLS");
                        std::cout << "�Ƿ�ֵ,���������Ա�" << std::endl;
                    }
                }
            }

            system("CLS");
            std::cout << "ԭ�ֻ���Ϊ:" << it->ReturnPhone_Number();
            std::cout << "    �Ƿ��޸�  1�� 0��" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "�޸�Ϊ:";
                std::cin >> S;
                it->SetPhone_Number(S);
            }

            system("CLS");
            std::cout << "ԭ��ַΪ:" << it->ReturnAddress();
            std::cout << "    �Ƿ��޸�  1�� 0��" << std::endl;
            std::cin >> B;
            if (B) {
                system("CLS");
                std::cout << "�޸�Ϊ:";
                std::cin >> S;
                it->SetAddress(S);
            }

            system("CLS");
            std::cout << "����޸�:" << std::endl;
            system("pause");
            return;
        }
    }
    std::cout << "δ�ҵ���ϵ��:" << S;
    std::cout << std::endl;
    system("pause");
}

void FuncTion::Clear() {
    system("CLS");
    Book.clear();
    std::cout << "�������ϵ��" << std::endl;
    system("pause");
}

void FuncTion::_NULL() {
    system("CLS");
}
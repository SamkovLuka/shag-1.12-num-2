
#include <iostream>
#include "Overcoat.h"
#include "Flat.h"
using namespace std;

int main()
{
    //�������� 1

    Overcoat coat1("������", 1000);
    Overcoat coat2("������", 3000);
    Overcoat coat3("�����", 500);

    coat1.Show();
    coat2.Show();
    coat3.Show();

    

    if (coat1 == coat2) {
        cout << "coat1 � coat2 ����� ��������� ��� �����" << endl;
    }
    else {
        cout << "coat1 � coat2 ����� ����� ��� �����" << endl;
    }

    if (coat1 == coat3) {
        cout << "coat1 � coat3 ����� ��������� ��� �����" << endl;
    }
    else {
        cout << "coat1 � coat3 ����� ����� ��� �����" << endl;
    }

    

    cout << "�������� ���:" << endl;
    coat1.Show();
    coat2.Show();

    
    coat2 = coat1;

    
    cout << "ϳ��� ���������:" << endl;
    coat1.Show();
    coat2.Show();



    

    if (coat1 > coat2) {
        cout << "������ ������� �� ������" << endl;
    }
    else {
        cout << "������ ������� ��� �� ���� � ����, �� � ������" << endl;
    }

    if (coat2 > coat3) {
        cout << "������ ������� �� �����" << endl;
    }
    else {
        cout << "������ ������� ��� �� ���� � ����, �� � �����" << endl;
    }



    //�������� 2

    Flat flat1(50.5, 120000, "123 Main St");
    Flat flat2(75.0, 200000, "456 Elm St");
    Flat flat3(50.5, 100000, "789 Pine St");



    if (flat1 == flat3) {
        cout << "Flat 1 and Flat 3 have the same area\n";
    }
    else {
        cout << "Flat 1 and Flat 3 have different areas\n";
    }

    


    flat3 = flat2;
    cout << "After assignment, Flat 3:\n";
    flat3.printInfo();



    if (flat2 > flat1) {
        cout << "Flat 2 is more expensive than Flat 1\n";
    }
    else {
        cout << "Flat 2 is cheaper than or equal to Flat 1 in price\n";
    }

}


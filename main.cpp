/*
�������� �1. ������� ��������� ���� ������'������ ������.
������� �������� ��������� ��� ������� �������� ��� ����������:
1. addToHead - ��������� �������� � ������

2. *addToTail - ��������� �������� � ����

3. deleteFromHead - ��������� �������� � ������

4. *deleteFromTail - ��������� �������� � ������

5. deleteAll - ��������� ��� ��������

6. Show - ����������� ��� �������� ������ �� �����

7. ����������� ��ﳿ
8. �������� ���������(=)
9. �������� ��������� ���� ������ �� ��������� (==)
*/

#include <iostream>
#include"SList.h"
#include"String"

using namespace std;

int main()
{
	SList<string>listS;

	listS.addOnFirst("Igop");
	listS.addOnFirst("Ivan");
	listS.addOnFirst("Andriy");
	listS.addOnFirst("Vasya");

	listS.print();

	listS.deleteFromLast();
	listS.print();

	listS.deleteFromFirst();
	listS.print();

	listS.deleteAll();
	listS.print();

	//listS.deleteFromFirst();

	//listS.addOnLast("Dima");

	//listS.print();

	return 0;
}
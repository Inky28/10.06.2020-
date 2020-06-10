/*
Завдання №1. Створіть шаблонний клас однозв'язного списку.
Потрібно створити реалізації для типових операцій над елементами:
1. addToHead - додавання елемента в голову

2. *addToTail - додавання елемента в хвіст

3. deleteFromHead - видалення елемента з голови

4. *deleteFromTail - видалення елемента з хвоста

5. deleteAll - видалення всіх елементів

6. Show - відображення всіх елементів списку на екран

7. Конструктор копії
8. Операцію присвоєння(=)
9. Операцію порівняння двох списків на співпадіння (==)
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
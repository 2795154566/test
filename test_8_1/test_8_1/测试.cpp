#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

#include"stdlib.h"
#include<fstream>

class Stu
{
public:
	char num[20];
	char name[20];
	int sex;
	int age;
	void print() { cout << "num:" << num << "\tname:" << name << "\tsex:" << sex << "\tage:" << age << endl; }
};

void main()
{
	Stu slist[60];
	int count = 0;
	int i;

	ifstream infile("a1.txt", ios::in);

	if (!infile) { cout << "infile open error" << endl; return; }
	char templine[255];
	char m[20], n[20];
	int tempsex, tempage;

	while (!infile.eof())
	{
		infile.getline(templine, 255);
		sscanf(templine, "%s%s%d%d", &slist[count].num, &slist[count].name, &slist[count].sex, &slist[count].age);
		count++;
	}
	infile.close();

	for (int i = 0; i < count; i++)
		slist[i].print();
	cout << "___________________________" << endl;

	for (int i = 0; i < count - 1; i++)
		for (int j = 0; j < count - 1 - i; j++)
			if (slist[j].age > slist[j + 1].age)
			{
				Stu temp = slist[j];
				slist[j] = slist[j + 1];
				slist[j + 1] = temp;
			}

	for (int i = 0; i < count; i++)
		slist[i].print();
	system("pause");

}
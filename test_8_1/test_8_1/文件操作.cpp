#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#define N 60
class Student
{
public:
	int id;
	string name;
	int sex;
	int age;
	void shown()
	{
		cout << "ѧ��\t" << id << "����\t" << name << "�Ա�\t" << sex << "����\t" << age << endl;
    }
};
int main()
{
	Student slist[N];
	int count = 0;
	int i;

	ifstream ifs("a1.txt", ios::in);

	if (!ifs)
	{ 
		cout << "infile open error" << endl;
	    return 1; 
	}
	/*char templine[255];
	char m[20], n[20];
	int tempsex, tempage;*/
	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}
	ifs.close();
	return 0;
}
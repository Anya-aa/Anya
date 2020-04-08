#include <iostream>

using namespace std;

typedef struct
{
	bool home;
	int age;
	char name[4];
	float height;
	bool weight;
	char NameHerOwner[4];
}Cat;

typedef struct
{
	bool home;
	bool weight;
	char name[4];
	char NameHerOwner[4];
	int age;
	float height;
}Cat1;

#pragma pack(push, 1)
typedef struct
{
	bool home;
	bool weight;
	char name[4];
	char NameHerOwner[4];
	int age;
	float height;
}DisorderedCat;
#pragma pack(pop)

int main()
{

	Cat cat;
	Cat1 cat1;
	DisorderedCat disorderedcat;
	cout << "size of bool: " << sizeof(cat.home) << endl;
	cout << "size of char: " << sizeof(cat.name) << endl;
	cout << "size of int: " << sizeof(cat.age) << endl;
	cout << "size of float: " << sizeof(cat.height) << endl;
	cout << "size of Cat: " << sizeof(Cat) << endl;
	cout << "size of Cat1 " << sizeof(Cat1) << endl;
	cout << "size of DisorderedCat: " << sizeof(DisorderedCat) << endl;
	cout << "sum of fields in Cat struct  : " << sizeof(cat.home) + sizeof(cat.height) + sizeof(cat.name) + sizeof(cat.age) + sizeof(cat.NameHerOwner) + sizeof(cat.weight) << endl;
	cout << "sum of fields in DisorderedCat struct  : " << sizeof(cat.home) + sizeof(cat.height) + sizeof(cat.name) + sizeof(cat.age) + sizeof(cat.NameHerOwner) + sizeof(cat.weight) << endl;
	cout << &cat.home << " bool" << " " << endl;
	cout << &cat.age << " int" << " " << endl;
	cout << &cat.name << " char" << " " << endl;
	cout << &cat.height << " float" << " " << endl;
	cout << &cat.weight << " bool" << " " << endl;
	cout << &cat.NameHerOwner << " char" << " " << endl;

	cout << &cat1.home << " bool" << " " << endl;
	cout << &cat1.weight << " bool" << " " << endl;
	cout << &cat1.name << " char" << " " << endl;
	cout << &cat1.NameHerOwner << " char" << " " << endl;
	cout << &cat1.age << " int" << " " << endl;
	cout << &cat1.height << " float" << " " << endl;

	cout << &disorderedcat.home << " bool" << " " << endl;
	cout << &disorderedcat.weight << " bool" << " " << endl;
	cout << &disorderedcat.name << " char" << " " << endl;
	cout << &disorderedcat.NameHerOwner << " char" << " " << endl;
	cout << &disorderedcat.age << " int" << " " << endl;
	cout << &disorderedcat.height << " float" << " " << endl;

	return 0;
}

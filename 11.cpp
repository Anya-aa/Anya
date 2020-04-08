#include <iostream>
using namespace std;

int gl;
int main()
{
	int aut;
	int* dyn = new int;
	cout << "Global's address: " << &gl << endl;
	cout << "Automatic's address:  " << &aut << endl;
	cout << "Dynamic's address " << dyn << endl;
	delete dyn;
	return 0;
} 

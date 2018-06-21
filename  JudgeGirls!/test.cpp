#include<iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;
int main(void){
	string a = "Hello World!";
	string& ref = a;
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;
	ref = "ref!";
	cout << "new ref cause a = " << a << endl;
	return 0;
	}


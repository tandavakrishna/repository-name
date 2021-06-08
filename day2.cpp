#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;


namespace don;
	
	int x=23;
	void printx()
	{
	cout<<x<<endl;
	};


namespace marii;


	int y=33;
	void printx()
	{
		cout<<y<<endl;
	};

int main()
{
	don::printx();
	marii::printx();
	return 0;
}


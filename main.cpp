#include <iostream>
#include "pch.h"
#include "bank.h"

using namespace std;

int main()
{
	cout << "   ++++++++++++++++++++++++++\n";
    cout << "+++WELCOME TO THE EVIL'S BANK+++\n";
	cout << "   ++++++++++++++++++++++++++\n";

	Bank e;

	e.login();

	if(e.loginIsRight())
	e.startwork();

	return 0;
};

#include <iostream>
#include "Name.h"
#include "Sofja.h"

using namespace std;

Sofja::Sofja(string n)
{
	name=n;
}

void Sofja::setName(string n)
{
	name=n;
}

void Sofja::Print() const
{
	cout << name << endl;
}



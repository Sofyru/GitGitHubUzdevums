#include <iostream>
#include "Name.h"
using namespace std;

class Sofja: public Name
{
	public:
		Sofja(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};

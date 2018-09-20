#include "Base.h"
#include "Motor.h"
#include "Turn.h"
#include "Location.h"
#include <iostream>

using namespace Rover;
using namespace std;

const string Base::password = "UofSC";
const int Base::numberOfMotors = 6;

Rover::Base::Base()
{
}

int main()
{
	Base::start();
	return 0;
}
void Base::start()
{
	cout << "X location: " << Location::getX() << endl;
	cout << "Y location: " << Location::getY() << endl;
	std::cout << password << endl;
	getchar();
}

void Base::end()
{
	//return to location
}

void Base::initialize()
{
	Turn::reset();
}
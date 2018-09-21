#include "Base.h"
#include "Motor.h"
#include "Turn.h"
#include "Location.h"
#include <iostream>

using namespace Rover;
using namespace std;

const string Base::password = "UofSC";
const int Base::numberOfMotors = 6;
int Base::error = 0;

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
	if (runTest() == 0)
	{
		cout << "All test completed" << endl;
	}
	else
	{
		cout << "Test fail.\nError Code: " << error << endl;
	}
	getchar();
}

void Base::end()
{
	//return to location
}

void Base::initialize()
{
	//Here we should reset everything back to its normal state/zero
}

int Base::runTest()
{
	locationTest(error);
	turnTest(error);
	cameraTest(error);
	motorTest(error);
	return error;
}

int& Base::locationTest(int& error)
{
	//If there is an error make error equal 0001
	cout << "Currnet x value: " << Location::getX() << endl;
	cout << "Current y value: " << Location::getY() << endl;
	cout << "Current  vector: " << Location::getLocation().at(Location::x) <<
						   ", " << Location::getLocation().at(Location::y) << endl;

	Location::setLocation(5.0, 8.0);
	if (Location::getX() != Location::getLocation().at(Location::x))
	{
		error = error + 1;
	}
	if (Location::getY() != Location::getLocation().at(Location::y))
	{
		error = error + 1;
	}
	Location::setXManual(0.0);
	Location::setYManual(0.0);
	if (Location::getX() != 0.0)
	{
		error = error + 1;
	}
	if (Location::getY() != 0.0)
	{
		error = error + 1;
	}
	Location::setX(2.0);
	Location::setY(3.0);
	if (Location::getX() != 2.0)
	{
		error = error + 1;
	}
	if (Location::getY() != 3.0)
	{
		error = error + 1;
	}
	
	return error;
}

int& Base::turnTest(int& error)
{
	//If there is an error make error equal 0010
	//error = error + 10;
	return error;
}

int& Base::cameraTest(int& error)
{
	//If there is an error make err,./ or equal to 0100
	//error = error + 100;
	return error;
}

int& Base::motorTest(int& error)
{
	//If there is an error make error equal to 1000
	//error = error + 1000;
	return error;
}
#include "Base.h"
#include "Camera.h"
#include "CameraTest.h"
#include "Motor.h"
#include "MotorTest.h"
#include "Turn.h"
#include "TurnTest.h"
#include "Location.h"
#include "LocationTest.h"
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
  CameraTest::test(error);
	LocationTest::test(error);
  MotorTest::test(error);
	TurnTest::test(error);
	return error;
}

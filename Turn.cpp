#include "Turn.h"
#include <iostream>

using namespace Rover;
using namespace std;

struct Turn::turn Turn::backLeft;
struct Turn::turn Turn::backRight;
struct Turn::turn Turn::frontLeft;
struct Turn::turn Turn::frontRight;
struct Turn::turn Turn::cameraBase;
struct Turn::turn Turn::cameraElbow;
struct Turn::turn Turn::cameraHead;

void Turn::motor()
{
	//TODO 
	//Code to control the rotation motors
}

void Turn::camera()
{
	//TODO
	//Code to control the rotation camera
	//Doesnt the Camera class do this?
}
float Turn::getAngle(turn& motorAngle)
{
	//Returns the current angle of the given motor
	return motorAngle.angle;
}

float Turn::getMaximum(turn& motorMax)
{

	//Returns the current Maximum angle of the given motor
	return motorMax.maximum;
}

float Turn::getMinimum(turn& motorMin)
{
	//Returns the current Minimum angle of the given motor
	return motorMin.minimum;
}

float Turn::getMidpoint(turn& motorMid)
{
	//Returns the current Midpoint angle of the given motor
	return motorMid.midpoint;
}

void Turn::setAngle(turn& motorAngle, float ang)
{
	//Sets the angle to the given rotation motor
	motorAngle.angle = ang;
}

void Turn::setMaximum(turn& motorMax, float max)
{
	//Sets the Maximum angle to the given rotation motor
	motorMax.maximum = max;
}

void Turn::setMinimum(turn& motorMin, float min)
{
	//Sets the Minimum angle to the given rotation motor
	motorMin.minimum = min;
}

void Turn::setMidpoint(turn& motorMid, float mid)
{
	//Sets the Midpoint angle to the given rotation motor
	motorMid.midpoint = mid;
}

void Turn::reset()
{
	//Reverts all values to default 
	midpointReset();
	angleReset();
	maximumReset();
	minimumReset();
}

void Turn::midpointReset()
{
	//Default midpoint values set by us
	backLeft.midpoint = 0;
	backRight.midpoint = 0;
	frontLeft.midpoint = 0;
	frontRight.midpoint = 0;
	cameraBase.midpoint = 0;
	cameraElbow.midpoint = 0;
	cameraHead.midpoint = 0;
}

void Turn::angleReset()
{
	//Default angle values set by us
	backLeft.angle = 0;
	backRight.angle = 0;
	frontLeft.angle = 0;
	frontRight.angle = 0;
	cameraBase.angle = 0;
	cameraElbow.angle = 0;
	cameraHead.angle = 0;
}

void Turn::minimumReset()
{
	//Default minimum angle values set by us
	backLeft.minimum = 0;
	backRight.minimum = 0;
	frontLeft.minimum = 0;
	frontRight.minimum = 0;
	cameraBase.minimum = 0;
	cameraElbow.minimum = 0;
	cameraHead.minimum = 0;
}

void Turn::maximumReset()
{
	//Default maximum angle values set by us
	backLeft.maximum = 0;
	backRight.maximum = 0;
	frontLeft.maximum = 0;
	frontRight.maximum = 0;
	cameraBase.maximum = 0;
	cameraElbow.maximum = 0;
	cameraHead.maximum = 0;
}
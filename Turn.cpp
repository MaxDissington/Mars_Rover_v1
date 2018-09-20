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
	//motor control
}

void Turn::camera()
{
	//TODO
	//camera control
}
float Turn::getAngle(turn& motorAngle)
{
	return motorAngle.angle;
}

float Turn::getMaximum(turn& motorMax)
{
	return motorMax.maximum;
}

float Turn::getMinimum(turn& motorMin)
{
	return motorMin.minimum;
}

float Turn::getMidpoint(turn& motorMid)
{
	return motorMid.midpoint;
}

void Turn::setAngle(turn& motorAngle, float ang)
{
	motorAngle.angle = ang;
}

void Turn::setMaximum(turn& motorMax, float max)
{
	motorMax.maximum = max;
}

void Turn::setMinimum(turn& motorMin, float min)
{
	motorMin.minimum = min;
}

void Turn::setMidpoint(turn& motorMid, float mid)
{
	motorMid.midpoint = mid;
}

void Turn::reset()
{
	midpointReset();
	angleReset();
}

void Turn::midpointReset()
{
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
	backLeft.angle = 0;
	backRight.angle = 0;
	frontLeft.angle = 0;
	frontRight.angle = 0;
	cameraBase.angle = 0;
	cameraElbow.angle = 0;
	cameraHead.angle = 0;
}


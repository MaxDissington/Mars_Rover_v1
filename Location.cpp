#include "Location.h"

using namespace Rover;
using namespace std;

vector<float> Location::location(2, 0);
const int Location::x = 0; //First element
const int Location::y = 1; //Second element


float Location::getX()
{
	//Returns the location of the Rover in the x axis
	return location.at(x);
}

float Location::getY()
{
	//Returns the location of the Rover in the y axis
	return location.at(y);
}

vector<float> Location::getLocation()
{
	//Returns a vector with the (x, y) cooridinates
	return location;
}

void Location::setX(float xPos)
{
	location.at(x) += xPos;
}

void Location::setXManual(float xPos)
{
	//Sets just the X location of the Rover
	location.at(x) = xPos;
}

void Location::setY(float yPos)
{
	//Sets just the Y location of the Rover
	location.at(y) += yPos;
}

void Location::setYManual(float yPos)
{
	location.at(y) = yPos;
}

void Location::setLocation(float xPos, float yPos)
{
	//Sets both the X and Y location of the Rover
	setX(xPos);
	setY(yPos);
}

void Location::setLocationManual(float xPos, float yPos)
{
	setXManual(xPos);
	setYManual(yPos);
}
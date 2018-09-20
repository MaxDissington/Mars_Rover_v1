#include "Location.h"

using namespace Rover;
using namespace std;

vector<float> Location::location(2, 0);
const int Location::x = 0;
const int Location::y = 1;


float Location::getX()
{
	return location.at(x);
}

float Location::getY()
{
	return location.at(y);
}

void Location::setX(float xPosition)
{
	location.at(x) += xPosition;
}

void Location::setY(float yPosition)
{
	location.at(y) += yPosition;
}
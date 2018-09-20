#include "Motor.h"

using namespace Rover;
using namespace std;

void Motor::speedCalc(float speed)
{

}

float Motor::getForward(motor& motorF)
{
	return motorF.forwardSpeed;
}

float Motor::getBackward(motor& motorB)
{
	return motorB.backwardSpeed;
}

float Motor::getMaxSpeed(motor& motorMax)
{
	return motorMax.maximumSpeed;
}

float Motor::getMinSpeed(motor& motorMin)
{
	return motorMin.minimumSpeed;
}

float Motor::getState(motor& motorState)
{
	return motorState.state;
}

void Motor::setForward(motor& motorF, float speed)
{
	motorF.forwardSpeed = speed;
}

void Motor::setBackward(motor& motorB, float speed)
{
	motorB.backwardSpeed = speed;
}

void Motor::setMaxSpeed(motor& motorMax, float speed)
{
	motorMax.maximumSpeed = speed;
}

void Motor::setMinSpeed(motor& motorMin, float speed)
{
	motorMin.minimumSpeed = speed;
}

void Motor::setState(motor& motorState, bool state)
{
	motorState.state = state;
}
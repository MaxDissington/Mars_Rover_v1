#include "Motor.h"

using namespace Rover;
using namespace std;

void Motor::speedCalc(float speed)
{
	//Speed conversion for the given motor
	//Should be used for the setSpeed methods 
}

float Motor::getForward(motor& motorF)
{
	//Returns the current forward speed for the given motor
	return motorF.forwardSpeed;
}

float Motor::getBackward(motor& motorB)
{
	//Returns the current backwards speed for the given motor
	return motorB.backwardSpeed;
}

float Motor::getMaxSpeed(motor& motorMax)
{
	//Returns the current maximum speed for the given motor
	return motorMax.maximumSpeed;
}

float Motor::getMinSpeed(motor& motorMin)
{
	//Returns the current minimum speed for the given motor
	return motorMin.minimumSpeed;
}

float Motor::getState(motor& motorState)
{
	//Returns the current state of the motor (on and off)
	return motorState.state;
}

void Motor::setForward(motor& motorF, float speed)
{
	//Sets the forward speed for the given motor
	motorF.forwardSpeed = speed;
}

void Motor::setBackward(motor& motorB, float speed)
{
	//Sets the backward speed for the given motor
	motorB.backwardSpeed = speed;
}

void Motor::setMaxSpeed(motor& motorMax, float speed)
{
	//Sets the maximum speed for the given motor
	motorMax.maximumSpeed = speed;
}

void Motor::setMinSpeed(motor& motorMin, float speed)
{
	//Sets the minimum speed for the given motor
	motorMin.minimumSpeed = speed;
}

void Motor::setState(motor& motorState, bool state)
{
	//Sets the state for the given motor
	motorState.state = state;
}
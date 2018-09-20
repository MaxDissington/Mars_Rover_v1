#pragma once
#include "Base.h"

namespace Rover
{
	class Motor
		: public Base
	{
	public:
		static void speedCalc(float speed);
	private:
		static struct motor
		{
			float forwardSpeed;
			float backwardSpeed;
			bool state;
			float minimumSpeed;
			float maximumSpeed;
		};
	public:
		static float getForward(motor& motorF);
		static float getBackward(motor& motorB);
		static float getState(motor& motorS);
		static float getMinSpeed(motor& motorMin);
		static float getMaxSpeed(motor& motorMax);

		static void setForward(motor& motorF, float speed);
		static void setBackward(motor& motorB, float speed);
		static void setState(motor& motorState, bool state);
		static void setMinSpeed(motor& motorMin, float min);
		static void setMaxSpeed(motor& motorMax, float max);
	};
}
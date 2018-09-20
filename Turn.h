#pragma once 
#include "Base.h"
#include <string>


//This class takes care of all of the turning of the motors 
//Both Steering and Camera Angles
//If you wanted steering go to motor.h
namespace Rover
{
	class Turn
	{
	public:
		static void motor();
		static void camera();
		static void reset();		
		static void midpointReset();
		static void angleReset();

	private:
		static struct turn
		{
			float angle;
			float midpoint;
			float maximum;
			float minimum;
		};
	public:
		static float getAngle(turn& motorAngle);
		static float getMaximum(turn& motorMax);
		static float getMinimum(turn& motorMin);
		static float getMidpoint(turn& motorMid);;
		static void setAngle(turn& motorAngle, float ang);
		static void setMaximum(turn& motorMax, float max);
		static void setMinimum(turn& motorMin, float min);
		static void setMidpoint(turn& motorMid, float mid);

		static turn frontLeft;
		static turn frontRight;
		static turn backLeft;
		static turn backRight;
		static turn cameraBase;
		static turn cameraElbow;
		static turn cameraHead;


	};
}
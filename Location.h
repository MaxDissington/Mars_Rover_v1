#pragma once
#include "Base.h"
#include <vector>

namespace Rover
{
	class Location
		: public Base
	{
	public:
		static float getX();
		static float getY();
		static std::vector<float> getLocation();
		static void setX(float xPos);
		static void setXManual(float xPos);
		static void setY(float yPos);
		static void setYManual(float yPos);
		static void setLocation(float xPos, float yPos);
		static void setLocationManual(float xPos, float yPos);

		static const int x;
		static const int y;
	private:
		static std::vector<float> location;
	};
}
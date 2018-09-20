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
		static void setX(float xPosition);
		static void setY(float yPosition);
	private:
		static std::vector<double> location;
		static const int x;
		static const int y;
	};
}
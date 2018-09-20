#pragma once 
#include "Base.h"

namespace Rover
{
	class Camera
		: public Base
	{
	public:
		static void cameraMoveX(float xPos);
		static void cameraMoveY(float yPos);
	private:
		static bool camState;
	};
}
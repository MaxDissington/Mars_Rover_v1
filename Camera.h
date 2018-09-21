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
		static void cameraReset();
		static void cameraRelay();
	private:
		static bool camState;
		static float xCenter;
		static float yCenter;
	};
}
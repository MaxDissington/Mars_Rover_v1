#include "Camera.h"

using namespace Rover;
using namespace std;

float Camera::xCenter = 0;
float Camera::yCenter = 0;

void Camera::cameraRelay()
{
	//TODO
	//Code to display the camera
}
void Camera::cameraMoveX(float x)
{
	//TODO
	//Code to move the camera in the X axis
}

void Camera::cameraMoveY(float y)
{
	//TODO
	//Code to move the camera in the Y axis
}

void Camera::cameraReset()
{
	//This moves the camera back to the origin.
	cameraMoveX(xCenter);
	cameraMoveY(yCenter);
}
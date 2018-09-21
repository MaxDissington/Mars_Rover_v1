#pragma once 
#include <string>
#include <vector>

namespace Rover
{
	class Base
	{
	public:
		static const std::string Id;

		Base();
		static int main();
		static void start();
		static void initialize();
		static void end();
		static int runTest();

	private:
		static int& locationTest(int& error);
		static int& turnTest(int& error);
		static int& cameraTest(int& error);
		static int& motorTest(int& error);

		static const std::string password;
		static const int numberOfMotors;
		static int error;
		
	};
}
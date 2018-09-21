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
    static const std::string password;
		static const int numberOfMotors;
		static int error;
		
	};
}
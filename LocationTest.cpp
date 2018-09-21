#include "Location.h"
#include "LocationTest.h"
#include <iostream>

using namespace std;
using namespace Rover;

int LocationTest::test(int error)
{
  cout << "Location Test..." << endl;
  //If there is an error make error equal 0001
  Location::currentValue();

  Location::setLocation(5.0, 8.0);
  if (Location::getX() != Location::getLocation().at(Location::x))
  {
    error = error + 1;
  }
  if (Location::getY() != Location::getLocation().at(Location::y))
  {
    error = error + 1;
  }
  Location::currentValue();
  Location::setXManual(0.0);
  Location::setYManual(0.0);
  if (Location::getX() != 0.0)
  {
    error = error + 1;
  }
  if (Location::getY() != 0.0)
  {
    error = error + 1;
  }
  Location::setX(2.0);
  Location::setY(3.0);
  Location::setY(4.2);
  if (Location::getX() != 2.0)
  {
    error = error + 1;
  }
  if (Location::getY() != 3.0)
  {
    error = error + 1;
  }
  Location::currentValue();

  return error;
}

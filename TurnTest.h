#pragma once
#include "Base.h"

namespace Rover
{
  class TurnTest
    : public Base
  {
  public:
    static int test(int error);
  private:
    int ANYOTHERTEST(int error);

  };
}

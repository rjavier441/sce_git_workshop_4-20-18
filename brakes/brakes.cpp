#include <stdio.h>
#include "brakes.h"
using namespace std;

int brakePadIntegrity = 49;
int brakeFluidPressue = 53;

bool brakeCheck() {
    // If brakePadIntegrity < 60 OR breakFluidPressure < 40, return false. Otherwise, return true.

      if(brakePadIntegrity<60 || breakFluidPressure<40 )return false;
      else return true;
}

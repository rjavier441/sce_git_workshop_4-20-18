#include <stdio.h>
#include "engine.h"
using namespace std;

bool engineActive= false;
bool engineFailure = false;
int tempHi = 120;
int tempLo = 46;
int temperature = 50;

bool engineIsOn () {
    // If engineFailure is true, return false. If engineActive is false, return false. Otherwise, return true.
    if (engineFailure) {return false;}
    return engineActive ? true : false;
}

void startEngine() {
    // If temperature < tempLo OR temperature > tempHi, set engineFailure to true.
    if (temperature < tempLo || temperature > tempHi) {engineFailure = true;}
}

void setTempLo(int newTempLo) {
    // Sets the lower temperature threshold to a specified value
    tempLo = newTempLo;
}
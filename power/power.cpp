#include <stdio.h>
#include "power.h"
using namespace std;

int powerLevel = 32; //What does the scouter say?

bool powerCheck() {
	// If battery level < 20, return false. Otherwise, return true
	if(powerLevel < 20){
		return true;
	}
	else{
		return false;
	}
}
void resetPower(){
	powerLevel =32; //Back to inital state 
}

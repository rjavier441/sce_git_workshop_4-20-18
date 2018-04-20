#include <stdio.h>
#include "engine/engine.h"
#include "brakes/brakes.h"
#include "power/power.h"
using namespace std;

int main (void) {
    bool on = false;

    // Run car controller here
    printf ("carController active\n");

    // Attempt to start car
    startEngine();
    do {
        // Check engines
        on = engineIsOn();
        if (!on) {
            printf("engine failure\n");
            on = false;
        } else {
            printf("engine OK\n");
        }

        // Check brakes
        if (brakeCheck() == false) {
            printf("brake failure\n");
            on = false;
        } else {
            printf("brakes OK\n");
        }

        // Check power systems
        if (powerCheck() == false) {
            printf("power failure\n");
            on = false;
        } else {
            printf("power OK\n");
        }
    } while (on);

    printf("carController shutdown\n");

    return 0;
}

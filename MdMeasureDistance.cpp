#include "MdMeasureDistance.h"
#include "DrUltraSonic.h"
#include <Arduino.h>
#include "M5All-In-One-Gadget.h"

DrUltraSonic drul = DrUltraSonic(ECHO_PIN, TRIG_PIN);

double MdMeasureDistance::getDistance()
{
    double distance;
    distance = drul.measureReturnTime() * 340 * (0.000001) * 0.5 * 100;
    return distance;
}
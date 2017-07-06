#ifndef PRESSURESENSOR_H
#define PRESSURESENSOR_H
#include "Thread.h"
#include "Sensor.hpp"
#include <Adafruit_BMP085.h>

class PressureSensor: public Thread, public Sensor
{
  private:
    Adafruit_BMP085 * bmp;
  public:
    PressureSensor();
    ~PressureSensor();
    void run();
    void sense();

};

#endif /* PRESSURESENSOR_H */


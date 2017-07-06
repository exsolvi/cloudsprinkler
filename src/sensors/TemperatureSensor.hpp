#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H
#include "Thread.h"
#include "Sensor.hpp"
#include <Adafruit_BMP085.h>

class TemperatureSensor: public Thread, public Sensor
{
  private:
    Adafruit_BMP085 * bmp;
  public:
    TemperatureSensor();
    ~TemperatureSensor();
    void run();
    void sense();
};

#endif /* TEMPERATURESENSOR_H */


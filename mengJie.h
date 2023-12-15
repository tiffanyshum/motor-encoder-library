#ifndef _MENGJIE_H
#define _MENGJIE_H

#include <Arduino.h>

class MengJie {
 public:
    MengJie(int port); // Constructor

    void begin(); // Initialize the sensor
    float readAngle(); // Get the current rotation angle in degrees
    int getResolution(); // Get the resolution of the sensor
    int getSpeed(); // Get the rotating speed in RPM
    void setAngle(float newAngle); // Set the current rotation angle 
    void setResolution(int newResolution); // Set the resolution of the sensor
    void setSpeed(int newSpeed); // Set the rotating speed in RPM

 private:
    float currentAngle;
    int currentResolution;
    int currentSpeed;
    int currentPort;
    int readEncoder(); // Read the encoder value
    int mapValue(int value, int fromLow, int fromHigh, int toLow, int toHigh);

    class SerialCommunication {
      public:
         SerialCommunication(); // Constructor

         void sendData(int data);
         int receiveData();

      private:
         int currentData;
    };

    SerialCommunication serialComm;
};

#endif //_MENGJIE_H
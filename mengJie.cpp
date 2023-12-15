#include "mengJie.h"

MengJie::MengJie(int port)
{
    currentAngle = 0.0f;
    currentResolution = 18;
    currentSpeed = 9600;
    currentPort = port;
}

//No idea how to begin the sensor. This might be combined with the constructor.
void MengJie::begin(){
}

float MengJie::readAngle(){
    int encoderValue = readEncoder();
    float angle = mapValue(encoderValue, 0, (1 << 18) - 1, 0, 360);
    currentAngle = angle;

    return angle;
}

int MengJie::getResolution(){
    return currentResolution;
}

int MengJie::getSpeed(){
    return currentSpeed
}

void MengJie::setAngle(float newAngle) {
    int encoderValue = mapValue(newAngle, 0, 360, 0 (1 << 18) - 1);
}

void MengJie::setResolution(int newResolution) {
    currentResolution = newResolution;
}

void MengJie::setSpeed(int newSpeed) {
    currentSpeed = newSpeed;
}

int MengJie::readEncoder() {
    int encoderValue = 0; // Change this to what can retrieve the encoder value.
    return encoderValue;
}


// Ideally should map a value from one range to another except I am not really sure how to do this. 
int MengJie::mapValue(int value, int fromLow, int fromHigh, int toLow, int toHigh) {
    return map(value, fromLow, fromHigh, toLow, toHigh);
}

// Not really sure what else should be included within the constructor of the serial communication constructor other than the initial data it might contain?
MengJie::SerialCommunication::SerialCommunication() {
    currentData = 0;
}

// Is it possible to recieve data solely based on the port number if it is over the same computer?
int MengJie::SerialCommunication::receiveData(int port) {
    
}

// This should be code to send the current data via the serial port except I am confused on how to do port to port communication.
void MengJie::SerialCommunication::sendData(int data) {
    currentData = data;
    return currentData;
}

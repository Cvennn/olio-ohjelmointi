#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass():deviceID(0) {}

void DeviceBaseClass::setDevice()
{
    cout<<"Set Device ID: ";
    cin>> deviceID;
    cout<<endl<<endl;
}

short DeviceBaseClass::getDevice()
{
    return deviceID;
}

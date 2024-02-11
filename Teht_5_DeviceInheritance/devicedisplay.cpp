#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay():displayResolution(0)
{}

void DeviceDisplay::setDisplayResolution()
{
    cout<<"Set Display Resolution 1-10: ";
    cin>>displayResolution;
    if(displayResolution>10||displayResolution==0){
        cout<<"Invalid value"<<endl;
        setDisplayResolution();
    }
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}

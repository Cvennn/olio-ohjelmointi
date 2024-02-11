#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad():touchPadSensitivity(0) {}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout<<"Set Touchpad Sensitivity 1-5: ";
    cin>>touchPadSensitivity;
    if(touchPadSensitivity>5||touchPadSensitivity==0){
        cout<<"Invalid value"<<endl;
        setTouchPadSensitivity();
    }
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}

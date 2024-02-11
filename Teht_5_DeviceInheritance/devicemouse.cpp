#include "devicemouse.h"

DeviceMouse::DeviceMouse():primaryButton(0)
{}

void DeviceMouse::setPrimaryButton()
{
    cout<<"Set Primary Button 1-2: ";
    cin>>primaryButton;
    if(primaryButton>2||primaryButton==0){
        cout<<"Invalid value"<<endl;
        setPrimaryButton();
    }
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}

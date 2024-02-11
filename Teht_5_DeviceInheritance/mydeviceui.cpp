#include "mydeviceui.h"
#include <iostream>
using namespace std;

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse=new DeviceMouse();
    objectDeviceTouchpad=new DeviceTouchPad();
    objectDeviceDisplay=new DeviceDisplay();
}

void MyDeviceUI::uiShowMenu()
{
    short selection=0;

    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1. Set Mouse Information" << endl;
    cout << "2. Set Touchpad Information" << endl;
    cout << "3. Set Display Information" << endl;
    cout << "4. Show Devices" << endl;
    cout << "5. Finish" << endl<<endl;
    cout << "Select: ";
    cin>>selection;


    if(selection==1){
        uiSetMouseInformation();
        uiShowMenu();
    }
    if(selection==2){
        uiSetTouchPadInformation();
        uiShowMenu();
    }
    if(selection==3){
        uiSetDisplayInformation();
        uiShowMenu();
    }
    if(selection==4){
        uiShowDeviceInformation();
        uiShowMenu();
    }
    if(selection==5){

    }
    if(selection>5||selection==0){
        cout << "Unvalid option" << endl<<endl;
        uiShowMenu();
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "Configuring Mouse Information"<<endl;
    objectDeviceMouse->setPrimaryButton();
    objectDeviceMouse->setDevice();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "Configuring Touchpad Information"<<endl;
    objectDeviceTouchpad->setTouchPadSensitivity();
    objectDeviceTouchpad->setDevice();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "Configuring Display Information"<<endl;
    objectDeviceDisplay->setDisplayResolution();
    objectDeviceDisplay->setDevice();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << endl << endl;
    cout << "Device Information"<<endl;
    cout << "=================="<<endl<<endl;
    cout << "Mouse Configuration"<<endl;
    cout << "Mouse Primary Button: "<< objectDeviceMouse->getPrimaryButton()<<endl;
    cout << "Mouse DeviceID: "<< objectDeviceMouse->getDevice()<<endl;
    cout << endl;
    cout << "Touchpad Configuration"<<endl;
    cout << "Touchpad Sensitivity: "<< objectDeviceTouchpad->getTouchPadSensitivity()<<endl;
    cout << "Touchpad DeviceID: "<< objectDeviceTouchpad->getDevice()<<endl;
    cout << endl;
    cout << "Display Configuration"<<endl;
    cout << "Display Resolution: "<< objectDeviceDisplay->getDisplayResolution()<<endl;
    cout << "Display DeviceID: "<< objectDeviceDisplay->getDevice()<<endl;
    cout << endl << endl;
}

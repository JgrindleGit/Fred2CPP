#include "OI.h"

OI::OI()
{
	// Process operator interface input here.
	Driver = new Joystick(0);
	Aux = new Xbox(1);
}
/*Joystick OI::GetDriver(){
	return Driver;
}
Joystick OI::GetAux(){
	return Aux;
}*/
double OI::DriverGetAxis(int axis){
	return Driver->GetRawAxis(axis);
}

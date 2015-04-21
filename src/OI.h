#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "Xbox.h"

class OI
{
private:
	Joystick *Driver;
	Xbox *Aux;
public:
	OI();
	Joystick GetDriver();
	Joystick GetAux();
	double DriverGetAxis(int axis);
};

#endif

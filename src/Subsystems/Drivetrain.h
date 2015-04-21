#ifndef Drivetrain_H
#define Drivetrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Drivetrain: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon * fl_motor;
	Talon * fr_motor;
	Talon * bl_motor;
	Talon * br_motor;
	Talon * st_motor;
	RobotDrive * base;
public:
	Drivetrain();
	void InitDefaultCommand();
	void Arcadedrive(double drive, double turn, double strafe);
};

#endif

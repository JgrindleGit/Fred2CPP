#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

//DriveTrain

	//Motors
const int frontLeftDrive = 0;
const int frontRightDrive = 1;
const int backLeftDrive = 2;
const int backRightDrive = 3;
const int strafeDrive = 4;
	//Encoders
/*const int encoderRight;
const int encoderLeft;*/
	//Gyros
//const int gyro;

//Lift

	//Motors
const int elevatorCIM = 5;
	//Limit Switches
//const int limitTop;
//const int limitBottom;
	//Encoders
//const int liftEncoder;
	//Double Solenoids
//const int pusherSol;
//const int fixSol;
	//Single Solenoids
//const int stabSol;

//CanBurgaler

	//Motor
const int BurgalerMotor = 6;


#endif

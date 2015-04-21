#include <Commands/HArcadeDrive.h>
#include "Drivetrain.h"
#include "../RobotMap.h"

Drivetrain::Drivetrain() :
		Subsystem("Drivetrain")
{
	fl_motor = new Talon(frontLeftDrive);
	fr_motor = new Talon(frontRightDrive);
	bl_motor = new Talon(backLeftDrive);
	br_motor = new Talon(backRightDrive);
	st_motor = new Talon(strafeDrive);
	base = new RobotDrive(fl_motor, fr_motor, bl_motor, br_motor);
}

void Drivetrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new HArcadeDrive());
}
void Drivetrain::Arcadedrive(double drive, double turn, double strafe){
	st_motor->Set(strafe);
	base->ArcadeDrive(drive, turn);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

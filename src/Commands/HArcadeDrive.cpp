#include <Commands/HArcadeDrive.h>

HArcadeDrive::HArcadeDrive()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void HArcadeDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void HArcadeDrive::Execute()
{
	CommandBase::drive->Arcadedrive(-CommandBase::oi->DriverGetAxis(0), CommandBase::oi->DriverGetAxis(1), CommandBase::oi->DriverGetAxis(2));
}

// Make this return true when this Command no longer needs to run execute()
bool HArcadeDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void HArcadeDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HArcadeDrive::Interrupted()
{

}

#include "ArcadeDriveJoysticks.h"

#include "../Robot.h"
#include "../RobotMap.h"

ArcadeDriveJoysticks::ArcadeDriveJoysticks() {
	Requires(Robot::drive_train.get());
}

// Called just before this Command runs the first time
void ArcadeDriveJoysticks::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ArcadeDriveJoysticks::Execute() {
	Robot::drive_train->ArcadeDrive(Robot::oi->GetDriverAxis(DRIVER_LEFT_Y), Robot::oi->GetDriverAxis(DRIVER_LEFT_X));
}

// Make this return true when this Command no longer needs to run execute()
bool ArcadeDriveJoysticks::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArcadeDriveJoysticks::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArcadeDriveJoysticks::Interrupted() {
	Robot::drive_train->ArcadeDrive(0.0, 0.0);
}

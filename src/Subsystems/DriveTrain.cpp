#include "DriveTrain.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	drive(std::make_unique<RobotDrive>(DRIVE_LEFT, DRIVE_RIGHT))
{

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new ArcadeDriveJoysticks());
}

void DriveTrain::ArcadeDrive(double speed, double turn){
	drive->ArcadeDrive(speed, turn);
}

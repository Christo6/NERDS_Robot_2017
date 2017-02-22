#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	drive(std::make_unique<RobotDrive>(DRIVE_LEFT, DRIVE_RIGHT))
{

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void DriveTrain::ArcadeDrive(double speed, double turn){
	drive->ArcadeDrive(speed, turn);
}

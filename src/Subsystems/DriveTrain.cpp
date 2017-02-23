#include "DriveTrain.h"
#include "Commands/ArcadeDriveJoysticks.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	drive(std::make_unique<RobotDrive>(DRIVE_LEFT, DRIVE_RIGHT)),
	encoder_left(std::make_unique<Encoder>(ENCODER_LEFT_A, ENCODER_LEFT_B)),
	encoder_right(std::make_unique<Encoder>(ENCODER_RIGHT_A, ENCODER_RIGHT_B))
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

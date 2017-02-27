#include "DriveTrain.h"
#include "Commands/ArcadeDriveJoysticks.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	drive(std::make_unique<RobotDrive>(DRIVE_LEFT, DRIVE_RIGHT)),
	encoder_left(std::make_unique<Encoder>(ENCODER_LEFT_A, ENCODER_LEFT_B)),
	encoder_right(std::make_unique<Encoder>(ENCODER_RIGHT_A, ENCODER_RIGHT_B)),
	gyro(std::make_unique<ADXRS450_Gyro>())
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

void DriveTrain::ResetEncoders() {
	encoder_right->Reset();
	encoder_left->Reset();
}

int DriveTrain::GetRightEncoder() {
	return encoder_right->Get();
}

int DriveTrain::GetLeftEncoder() {
	return encoder_left->Get();
}

void DriveTrain::ResetGyro(){
	gyro->Reset();
}

double DriveTrain::GetAngle(){
	return gyro->GetAngle();
}

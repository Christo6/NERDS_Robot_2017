#ifndef DriveTrain_H
#define DriveTrain_H

#include <memory>
#include <Commands/Subsystem.h>
#include <RobotDrive.h>
#include <Encoder.h>
#include <ADXRS450_Gyro.h>

class DriveTrain : public Subsystem {
public:
	DriveTrain();
	void InitDefaultCommand();
	void ArcadeDrive(double, double);
	void ResetEncoders();
	int GetRightEncoder();
	int GetLeftEncoder();
	void ResetGyro();
	double GetAngle();
private:
	std::unique_ptr<RobotDrive> drive;
	std::unique_ptr<Encoder> encoder_left;
	std::unique_ptr<Encoder> encoder_right;
	std::unique_ptr<ADXRS450_Gyro> gyro;
};

#endif  // DriveTrain_H

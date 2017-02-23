#ifndef DriveTrain_H
#define DriveTrain_H

#include <memory>
#include <Commands/Subsystem.h>
#include <RobotDrive.h>
#include <Encoder.h>

#include "../RobotMap.h"

class DriveTrain : public Subsystem {
public:
	DriveTrain();
	void InitDefaultCommand();
	void ArcadeDrive(double, double);
private:
	std::unique_ptr<RobotDrive> drive;
	std::unique_ptr<Encoder> encoder_left;
	std::unique_ptr<Encoder> encoder_right;
};

#endif  // DriveTrain_H

#ifndef DriveTrain_H
#define DriveTrain_H

#include <memory>
#include <Commands/Subsystem.h>
#include <RobotDrive.h>

#include "../RobotMap.h"
#include "Commands/ArcadeDriveJoysticks.h"

class DriveTrain : public Subsystem {
public:
	DriveTrain();
	void InitDefaultCommand();
	void ArcadeDrive(double, double);
private:
	std::unique_ptr<RobotDrive> drive;
};

#endif  // DriveTrain_H

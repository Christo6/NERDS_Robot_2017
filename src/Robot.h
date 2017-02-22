#ifndef ROBOT_H
#define ROBOT_H

#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>

#include "Subsystems/DriveTrain.h"
#include "OI.h"

class Robot : public frc::IterativeRobot{
public:
	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

	//static shared pointers of each subsystem
	static std::shared_ptr<OI> oi;
	static std::shared_ptr<DriveTrain> drive_train;
private:
	frc::SendableChooser<frc::Command*> chooser;
};


#endif //ROBOT_H

#include "TurnOnClimber.h"

#include "Robot.h"

TurnOnClimber::TurnOnClimber() {
	Requires(Robot::climber.get());
}

// Called just before this Command runs the first time
void TurnOnClimber::Initialize() {
	Robot::climber->StartMotor(1.0);
}

// Called repeatedly when this Command is scheduled to run
void TurnOnClimber::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool TurnOnClimber::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TurnOnClimber::End() {
	Robot::climber->StopMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnOnClimber::Interrupted() {
	Robot::climber->StopMotor();
}

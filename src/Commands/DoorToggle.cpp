#include "DoorToggle.h"

DoorToggle::DoorToggle() {
	Requires(Robot::pneumatics.get());
}

// Called just before this Command runs the first time
void DoorToggle::Initialize() {
	if (Robot::pneumatics->GetDoorState()){
		Robot::pneumatics->CloseDoor();
	} else {
		Robot::pneumatics->OpenDoor();
	}
}

// Called repeatedly when this Command is scheduled to run
void DoorToggle::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool DoorToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void DoorToggle::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DoorToggle::Interrupted() {

}

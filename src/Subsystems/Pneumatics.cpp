#include "Pneumatics.h"
#include "../RobotMap.h"

Pneumatics::Pneumatics() : Subsystem("Pneumatics"),
	hinge_solenoid(std::make_unique<DoubleSolenoid>(SOLENOID_HINGE_FORWARD, SOLENOID_HINGE_REVERSE)),
	door_solenoid(std::make_unique<Solenoid>(SOLENOID_DOOR))
{

}

void Pneumatics::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Pneumatics::OpenHinge(){
	hinge_solenoid->Set(DoubleSolenoid::kForward);
	hinge_solenoid->Set(DoubleSolenoid::kOff);
	hinge_state = true;
}

void Pneumatics::CloseHinge(){
	hinge_solenoid->Set(DoubleSolenoid::kReverse);
	hinge_solenoid->Set(DoubleSolenoid::kOff);
	hinge_state = false;
}

void Pneumatics::OpenDoor(){
	door_solenoid->Set(true);
	door_state = true;
}

void Pneumatics::CloseDoor(){
	door_solenoid->Set(false);
	door_state = false;
}

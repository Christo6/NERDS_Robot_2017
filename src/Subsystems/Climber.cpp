#include "Climber.h"
#include "../RobotMap.h"

Climber::Climber() : Subsystem("Climber"),
	climber_motor(std::make_unique<VictorSP>(CLIMBER_MOTOR))
{

}

void Climber::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Climber::StartMotor(double speed){
	climber_motor->Set(speed);
}

void Climber::StopMotor(){
	StartMotor(0.0);
}

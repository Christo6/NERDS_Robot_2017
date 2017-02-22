#include "OI.h"

OI::OI() :
	driver_controller(std::make_unique<Joystick>(JOY_DRIVER))
{
	// Process operator interface input here.
}

double OI::GetDriverAxis(int axis){
	return ApplyDeadzone(driver_controller->GetRawAxis(axis));
}

double OI::ApplyDeadzone(double value){
	if (value < DEADZONE){
		return 0.0;
	}
	return value;
}

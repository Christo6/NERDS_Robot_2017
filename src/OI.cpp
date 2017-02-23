#include "OI.h"

#include "RobotMap.h"
#include "Commands/TurnOnClimber.h"
#include "Commands/DoorToggle.h"
#include "Commands/HingeToggle.h"

OI::OI() :
	driver_controller(std::make_unique<Joystick>(JOY_DRIVER)),
	driver_a(std::make_unique<JoystickButton>(driver_controller.get(), DRIVER_BTN_A)),
	driver_x(std::make_unique<JoystickButton>(driver_controller.get(), DRIVER_BTN_X)),
	driver_b(std::make_unique<JoystickButton>(driver_controller.get(), DRIVER_BTN_B))

{
	// Process operator interface input here.
	driver_a->WhileHeld(new TurnOnClimber);
	driver_b->WhenPressed(new DoorToggle);
	driver_x->WhenPressed(new HingeToggle);
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

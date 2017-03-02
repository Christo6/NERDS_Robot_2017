#ifndef OI_H
#define OI_H

#include <memory>
#include <Joystick.h>
#include <Buttons/JoystickButton.h>

class OI {
public:
	OI();
	double GetDriverAxis(int);
private:
	std::unique_ptr<Joystick> driver_controller;

	std::unique_ptr<JoystickButton> driver_a;
	std::unique_ptr<JoystickButton> driver_x;
	std::unique_ptr<JoystickButton> driver_b;

	double ApplyDeadzone(double);
};

#endif  // OI_H

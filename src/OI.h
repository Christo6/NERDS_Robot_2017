#ifndef OI_H
#define OI_H

#include <Joystick.h>
#include <memory>

#include "RobotMap.h"

class OI {
public:
	OI();
	double GetDriverAxis(int);
	double ApplyDeadzone(double);
private:
	std::unique_ptr<Joystick> driver_controller;
};

#endif  // OI_H

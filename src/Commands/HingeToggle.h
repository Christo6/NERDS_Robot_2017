#ifndef HingeToggle_H
#define HingeToggle_H

#include <Commands/Command.h>

#include "../Robot.h"
#include "../RobotMap.h"

class HingeToggle : public Command {
public:
	HingeToggle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // HingeToggle_H

#ifndef TurnOnClimber_H
#define TurnOnClimber_H

#include <Commands/Command.h>
#include "Robot.h"

class TurnOnClimber : public Command {
public:
	TurnOnClimber();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TurnOnClimber_H

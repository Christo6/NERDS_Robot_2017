#ifndef DoorToggle_H
#define DoorToggle_H

#include <Commands/Command.h>

class DoorToggle : public Command {
public:
	DoorToggle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DoorToggle_H

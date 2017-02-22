#ifndef Pneumatics_H
#define Pneumatics_H

#include <Commands/Subsystem.h>
#include <Solenoid.h>
#include <DoubleSolenoid.h>
#include <memory>

class Pneumatics : public Subsystem {
public:
	Pneumatics();
	void InitDefaultCommand();
	void OpenHinge();
	void CloseHinge();
	bool GetHingeState() {return hinge_state;}

	void OpenDoor();
	void CloseDoor();
	bool GetDoorState() {return door_state;}
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::unique_ptr<DoubleSolenoid> hinge_solenoid;
	std::unique_ptr<Solenoid> door_solenoid;
	bool hinge_state;
	bool door_state;
};

#endif  // Pneumatics_H

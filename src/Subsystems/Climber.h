#ifndef Climber_H
#define Climber_H

#include <Commands/Subsystem.h>
#include <memory>
#include <VictorSP.h>

class Climber : public Subsystem {
public:
	Climber();
	void InitDefaultCommand();
	void StartMotor(double);
	void StopMotor();

private:
	std::unique_ptr<VictorSP> climber_motor;
};

#endif  // Climber_H

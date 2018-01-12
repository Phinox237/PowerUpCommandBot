
#pragma once
#include <WPILib.h>
#include <Commands/Subsystem.h>

class Claw : public frc::Subsystem {
public:
	Claw();
	void InitDefaultCommand();
	void RunSystem();

private:

	Solenoid *sol;

};

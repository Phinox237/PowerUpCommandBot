#include <Claw.h>
#include <WPILib.h>
#include "ExampleSubsystem.h"
#include "../RobotMap.h"

using namespace frc;
using namespace std;


Claw::Claw(): Subsystem("ExampleSubsystem") {
	sol = new Solenoid(solClaw);
}

void Claw::InitDefaultCommand(){

}

void Claw::RunSystem() {
	sol->Set(1);
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

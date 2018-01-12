/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <WPILib.h>

float xAxis;
float yAxis;
float zAxis;

OI::OI() {
	// Process operator interface input here.
	stickDrive = Joystick(0);
	stickAux = Joystick(1);
	solPush = Solenoid(0);
	solClaw = Solenoid(1);
	yAxis = stickDrive->GetY();
	xAxis = stickDrive->GetX();

}

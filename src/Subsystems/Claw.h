/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <Spark.h>
using namespace frc;

class Claw : public Subsystem {
public:
	Claw();
	void InitDefaultCommand() override;

	Spark *clawFL;
	Spark *clawRL;
	Spark *clawFR;
	Spark *clawRR;

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

};

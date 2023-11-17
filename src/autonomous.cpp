// ----------------------------------
// Module: autonomous.cpp
// Description: Autonomous!
// ----------------------------------

/*
HUH?
*/
#include "vex.h"

using namespace vex;

void pre_auton(void)
{
	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...

	autonUI_init();
}

void autonomous()
{
	fullDrive.setVelocity(75, pct);
	fullDrive.spinFor(reverse, 600, deg);
	fullDrive.setVelocity(40, pct);
	fullDrive.spinFor(forward, 300, deg);
	fullDrive.spinFor(reverse, 400, deg);
	fullDrive.spinFor(forward, 800, deg);
	// LeftMotors.spinFor(reverse, 175, deg);
	// RightMotors.spinFor(forward, 180, deg);
	// fullDrive.spinFor(forward, 950, deg);
}

void programmingSkills()
{
	
}
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
	RotationSensor.init();
	RotationSensor.resetPosition();
	autonUI_init();
}

void autonomous()
{
	// fullDrive.setVelocity(75, pct);
	// fullDrive.spinFor(reverse, 600, deg);
	// fullDrive.setVelocity(40, pct);
	// fullDrive.spinFor(forward, 300, deg);
	// fullDrive.spinFor(reverse, 400, deg);
	// fullDrive.spinFor(forward, 800, deg);


	// LeftMotors.spinFor(reverse, 175, deg);
	// RightMotors.spinFor(forward, 180, deg);
	// fullDrive.spinFor(forward, 950, deg);
	FrontLeft.setBrake(hold);
	FrontRight.setBrake(hold);
	BackBottomLeft.setBrake(hold);
	BackBottomRight.setBrake(hold);
	BackTopLeft.setBrake(hold);
	BackTopRight.setBrake(hold);
	moveForward(100, .1);
	moveBackward(75, .3);
	wait(.5, sec);
	turnRight();
	turnRight();
	wait(.5, sec);
	moveForward(80, .6);
}

void programmingSkills()
{
	
}
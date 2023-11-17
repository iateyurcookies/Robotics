/*----------------------------------------------------------------------------*/
/*																																						*/
/*		Module:			 main.cpp																									*/
/*		Author:			 VEX																											 */
/*		Created:			Wed Sep 25 2019																					 */
/*		Description:	Tank Drive																								*/
/*		This sample allows you to control the V5 Clawbot using the both				 */
/*		joystick. Adjust the deadband value for more accurate movements.				*/
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Procrastination Passion Protobot]							 [Type]				[Port(s)]
// Controller1					controller
// LeftMotor						motor				 1
// RightMotor					 motor				 10
// ClawMotor						motor				 3
// ArmMotor						 motor				 8
// ---- END VEXCODE CONFIGURED DEVICES ----
// Who is the main coder of the project
// Raj

#include "vex.h"

using namespace vex;

competition Competition;

int main()
{
	// Initializing Robot Configuration. DO NOT REMOVE!
	vexcodeInit();

	Competition.autonomous(autoLine);
	Competition.drivercontrol(usercontrol_cb);
	Brain.Screen.pressed(autonUI_cb);

	pre_auton();

	while (true)
	{
		wait(50, msec);
	}
}
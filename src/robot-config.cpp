#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

// VEXcode device constructors
controller Controller = controller(primary);
motor FrontLeft = motor(PORT11, ratio18_1, false);
motor FrontRight = motor(PORT1, ratio18_1, true);
motor BackTopLeft = motor(PORT19, ratio18_1, true);
motor BackTopRight = motor(PORT9, ratio18_1, false);
motor BackBottomLeft = motor(PORT20, ratio18_1, false);
motor BackBottomRight = motor(PORT8, ratio18_1, true);
motor Cata = motor(PORT18, ratio18_1, true);

pneumatics Wings = pneumatics(Brain.ThreeWirePort.A);

rotation RotationSensor = rotation(PORT17);

motor_group LeftMotors = motor_group(FrontLeft, BackBottomLeft, BackTopLeft);
motor_group RightMotors = motor_group(FrontRight, BackBottomRight, BackTopRight);
motor_group fullDrive = motor_group(FrontLeft, BackBottomLeft, BackTopLeft, FrontRight, BackBottomRight, BackTopRight);
drivetrain Drivetrain = drivetrain(LeftMotors, RightMotors);
// VEXcode generated functions

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // nothing to initialize
}
// ----------------------------------
// Module: usercontrol.cpp
// Description: User Control!
// ----------------------------------

#include "vex.h"

using namespace vex;

void usercontrol_cb(void)
{
    while (true)
    {
        // drivetrain code
        {
            fullDrive.setStopping(coast);
            Cata.setStopping(coast);
            while (1)
            {
                Controller1.ButtonY.pressed(toggleWings);
                double turnVal = -(Controller1.Axis3.position(percent));
                double forwardVal = -Controller1.Axis1.position(percent);

                // deadzone check
                if (abs(turnVal) < DEADZONE)
                {
                    turnVal = 0;
                }

                if (abs(forwardVal) < DEADZONE)
                {
                    forwardVal = 0;
                }

                // convert to volts
                double turnVolts = turnVal * 0.12;
                double forwardVolts = forwardVal * 0.12 * (1 - (std::abs(turnVolts) / 12.0) * TURN_IMPORTANCE);

                // arcade drive controls
                LeftMotors.spin(forward, forwardVolts + turnVolts, volt);
                RightMotors.spin(reverse, forwardVolts - turnVolts, volt);

                wait(20, msec);
            }
        }
    }
    // Catapult code
    {
        // cata control
        if (Controller1.ButtonR1.pressing())
        {
            Cata.spin(forward, 40, pct);
        }
        else
        {
            Cata.stop(coast);
        }
    }
    // Intake code
    {
        Intake.setStopping(hold);
        Intake.setVelocity(60, percent);
        // Buttons for chain/roller spinner thingy
        if (Controller.ButtonL1.pressing())
        {
            Intake.spin(forward);
        }
        else if (Controller.ButtonL2.pressing())
        {
            Intake.spin(reverse);
        }
        else
        {
            Intake.stop();
        }
    }
}
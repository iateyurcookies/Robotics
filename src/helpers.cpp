// ----------------------------------
// Module: helpers.cpp
// Description: Contains helpers for autonomous
// ----------------------------------

#include "vex.h"

using namespace vex;

void moveBackward(int velocity, double time)
{
    // Drivetrain.
    FrontLeft.setVelocity(velocity, percent);
    FrontRight.setVelocity(velocity, percent);
    BackLeft.setVelocity(velocity, percent);
    BackRight.setVelocity(velocity, percent);
    FrontLeft.spin(forward);
    FrontRight.spin(forward);
    BackLeft.spin(forward);
    BackRight.spin(forward);
    wait(time, sec);
    FrontLeft.stop();
    FrontRight.stop();
    BackLeft.stop();
    BackRight.stop();
}

void moveForward(int velocity, double time)
{
    FrontLeft.setVelocity(velocity, percent);
    FrontRight.setVelocity(velocity, percent);
    BackLeft.setVelocity(velocity, percent);
    BackRight.setVelocity(velocity, percent);
    FrontLeft.spin(reverse);
    FrontRight.spin(reverse);
    BackLeft.spin(reverse);
    BackRight.spin(reverse);
    wait(time, sec);
    FrontLeft.stop();
    FrontRight.stop();
    BackLeft.stop();
    BackRight.stop();
}

void turnRight()
{
    // Power right motor, to turn left
    FrontRight.setVelocity(75, percent);
    FrontLeft.setVelocity(75, percent);
    BackRight.setVelocity(75, percent);
    BackLeft.setVelocity(75, percent);
    FrontRight.spin(forward);
    BackRight.spin(forward);
    FrontLeft.spin(reverse);
    BackLeft.spin(reverse);
    wait(0.34, sec);
    FrontRight.stop();
    FrontLeft.stop();
    BackRight.stop();
    BackLeft.stop();
}

void turnLeft()
{
    // Power right motor, to turn left
    FrontRight.setVelocity(75, percent);
    FrontLeft.setVelocity(75, percent);
    BackRight.setVelocity(75, percent);
    BackLeft.setVelocity(75, percent);
    FrontRight.spin(reverse);
    BackRight.spin(reverse);
    FrontLeft.spin(forward);
    BackLeft.spin(forward);
    wait(0.34, sec);
    FrontRight.stop();
    FrontLeft.stop();
    BackRight.stop();
    BackLeft.stop();
}

void openWings()
{
    triport Piston1 = vex::triport(vex::PORT22);
    triport Piston2 = vex::triport(vex::PORT22);
    digital_out P1 = digital_out(Piston1.A);
    digital_out P2 = digital_out(Piston2.B);

    P1.set(true);
    P2.set(true);
}

void closeWings()
{
    triport Piston1 = vex::triport(vex::PORT22);
    triport Piston2 = vex::triport(vex::PORT22);
    digital_out P1 = digital_out(Piston1.A);
    digital_out P2 = digital_out(Piston2.B);

    P1.set(false);
    P2.set(false);
}

void rotateCata() {
  Cata.spinFor(forward, 365, degrees);
}
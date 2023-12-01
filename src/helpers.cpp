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
    BackTopLeft.setVelocity(velocity, percent);
    BackTopRight.setVelocity(velocity, percent);
    BackBottomLeft.setVelocity(velocity, percent);
    BackBottomRight.setVelocity(velocity, percent);
    FrontLeft.spin(forward);
    FrontRight.spin(forward);
    BackTopLeft.spin(forward);
    BackTopRight.spin(forward);
    BackBottomLeft.spin(forward);
    BackBottomRight.spin(forward);
    wait(time, sec);
    FrontLeft.stop();
    FrontRight.stop();
    BackTopLeft.stop();
    BackTopRight.stop();
    BackBottomLeft.stop();
    BackBottomRight.stop();
}

void moveForward(int velocity, double time)
{
    FrontLeft.setVelocity(velocity, percent);
    FrontRight.setVelocity(velocity, percent);
    BackTopLeft.setVelocity(velocity, percent);
    BackTopRight.setVelocity(velocity, percent);
    BackBottomLeft.setVelocity(velocity, percent);
    BackBottomRight.setVelocity(velocity, percent);
    FrontLeft.spin(reverse);
    FrontRight.spin(reverse);
    BackTopLeft.spin(reverse);
    BackTopRight.spin(reverse);
    BackBottomLeft.spin(reverse);
    BackBottomRight.spin(reverse);
    wait(time, sec);
    FrontLeft.stop();
    FrontRight.stop();
    BackTopLeft.stop();
    BackTopRight.stop();
    BackBottomLeft.stop();
    BackBottomRight.stop();
}

void turnRight()
{
    // Power right motor, to turn left
    FrontRight.setVelocity(75, percent);
    FrontLeft.setVelocity(75, percent);
    BackTopRight.setVelocity(75, percent);
    BackTopLeft.setVelocity(75, percent);
    BackBottomLeft.setVelocity(75, percent);
    BackBottomRight.setVelocity(75, percent);
    FrontRight.spin(forward);
    BackTopRight.spin(forward);
    BackBottomRight.spin(forward);
    FrontLeft.spin(reverse);
    BackTopLeft.spin(reverse);
    BackBottomLeft.spin(reverse);
    wait(0.34, sec);
    FrontRight.stop();
    FrontLeft.stop();
    BackTopRight.stop();
    BackBottomRight.stop();
    BackTopLeft.stop();
    BackBottomLeft.stop();
}

void turnLeft()
{
    // Power right motor, to turn left
    FrontRight.setVelocity(75, percent);
    FrontLeft.setVelocity(75, percent);
    BackTopRight.setVelocity(75, percent);
    BackTopLeft.setVelocity(75, percent);
    BackBottomLeft.setVelocity(75, percent);
    BackBottomRight.setVelocity(75, percent);
    FrontRight.spin(reverse);
    BackTopRight.spin(reverse);
    BackBottomRight.spin(reverse);
    FrontLeft.spin(forward);
    BackTopLeft.spin(forward);
    BackBottomLeft.spin(forward);
    wait(0.34, sec);
    FrontRight.stop();
    FrontLeft.stop();
    BackTopRight.stop();
    BackBottomRight.stop();
    BackTopLeft.stop();
    BackBottomLeft.stop();
}

void openWings()
{
    triport Piston1 = vex::triport(vex::PORT22);
    triport Piston2 = vex::triport(vex::PORT22);
    digital_out P1 = digital_out(Piston1.A);
    digital_out P2 = digital_out(Piston2.B);

    P1.set(true);
    P2.set(P1.value());
}

void closeWings()
{
    triport Piston1 = vex::triport(vex::PORT22);
    triport Piston2 = vex::triport(vex::PORT22);
    digital_out P1 = digital_out(Piston1.A);
    digital_out P2 = digital_out(Piston2.B);

    P1.set(false);
    P2.set(!P1.value());
}

void rotateCata() 
{
  Cata.spinFor(forward, 365, degrees);
}

void toggleWings()
{
    triport Piston1 = vex::triport(vex::PORT22);
    digital_out P1 = digital_out(Piston1.A);

    P1.set(!P1.value());
}
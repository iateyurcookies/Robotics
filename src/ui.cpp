// ----------------------------------
// Module: ui.cpp
// Description: Autonomous switcher code
// ----------------------------------

#include "vex.h"

using namespace vex;

// SYSTEM_DISPLAY_WIDTH   - 480
// SYSTEM_DISPLAY_HEIGHT  - 272

int autonSelected; 

bool buttonPressed(int tx, int ty, int x, int y)
{
  return ((tx >= x && tx <= x + AUTON_UI_BUTTONSIZE) && (ty >= y && ty <= y + AUTON_UI_BUTTONSIZE));
}

void autonUI_init()
{
  // Draws the initial UI

  Brain.Screen.clearScreen(black);

  // Select Rectangle
  Brain.Screen.setFillColor(blue);
  Brain.Screen.drawRectangle(140, 18, AUTON_UI_BUTTONSIZE, AUTON_UI_BUTTONSIZE);
  Brain.Screen.printAt(141, 36, "Select");
  Brain.Screen.setFillColor(black);
  Brain.Screen.printAt(140, 220, "Line              ");
}

// CB is setup in autonomous.cpp
void autonUI_cb()
{
  int tx = Brain.Screen.xPosition();
  int ty = Brain.Screen.yPosition();

  // Checking for the "Select" button
  if (buttonPressed(tx, ty, 60, 60))
  {
    autonSelected++;
    autonSelected %= AUTON_MAX;

    switch (autonSelected)
    {
    case AUTON_LONG:
    default:
      Brain.Screen.printAt(140, 220, "Line              ");
      Competition.autonomous(autoLine);
      break;
    case AUTON_SHORT:
      Brain.Screen.printAt(140, 220, "No Line             ");
      Competition.autonomous(autoNoLine);
      break;
    case AUTON_SKILLS:
      Brain.Screen.printAt(140, 220, "Programming Skills");
      Competition.autonomous(programmingSkills);
      break;
    }
  }
}
